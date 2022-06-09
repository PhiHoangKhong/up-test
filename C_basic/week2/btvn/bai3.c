#include "stdio.h"
#include "stdlib.h"

int soLuong(char *fileName){
    FILE *fin;
    if((fin = fopen(fileName, "r"))==NULL){
        printf("can not open file %s\n",fileName);
        exit(-1);
    }
    int n, i=0;
    while(fscanf(fin, "%d", &n)>0){
        i++;
    }
    fclose(fin);
    return i;
}

void dem(char *fileName){
    FILE *fin ;
    if((fin = fopen(fileName, "r"))==NULL){
        printf("can not open file %s\n",fileName);
        exit(-1);
    }
    int n = soLuong(fileName);
    printf("\nn = %d\n",n);
    int i=0;
    int value[n], tanSo[n];
    while(fscanf(fin, "%d", &value[i])>0){
        i++;
    }

    i=0;
    for(i; i<n; i++){
        tanSo[i] = 0; // ban dau so luong cac so deu la 0
    }

    i=0;
    for(i; i<n; i++){
        printf("vl[%d] = %d\n", i, value[i]);
    }

    i=0;
    int value1[n];
    for(i; i<n; i++){
        value1[i] = 1;
    }

    i=0;
    int j;
    for(i; i<n; i++){
        tanSo[i] = 1;
        if(value1[i]){
            value1[i] = 0;
            for(j=i+1; j<n; j++){
                if(value[j] == value[i]){
                    tanSo[i] ++;
                    value1[j]=0;
                }
            }
            printf("%d - %d\n",value[i], tanSo[i]);
        }
    }

    i=0, j=0;
    int maxTanSo = tanSo[0], maxValue = value[0];
    for(i; i<n; i++){
        for(j=i; j<n; j++){
            if(tanSo[i] < tanSo[j]){
                maxTanSo = tanSo[j];
                maxValue = value[j];
            }
        }
    }
    fclose(fin);
    printf("\nSo co tan so lon nhat la: %d - %d",maxValue, maxTanSo);
}

int main(int argc, char* argv[]){
    if(argc!=2){
        printf("\nsai doi so!");
        exit(-1);
    }
    soLuong(argv[1]);
    dem(argv[1]);
    printf("\n");
}