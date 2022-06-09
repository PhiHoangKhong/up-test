#include "stdio.h"
#include "stdlib.h"

void dem(char *fileName){
    FILE *fin = fopen(fileName, "r");
    if(fin==NULL)
        exit(-1);
    int sum=0, count=0;
    int tmp;
    while(fscanf(fin, "%d", &tmp)>0){
        count++;
        sum += tmp; 
    }
    fclose(fin);
    if(count==0)
        printf("\nKhong co so nao.");
    else{
        printf("\nSo luong so: %d", count);
        printf("\nTong: %d",sum);
        printf("\nTBC: %.2lf", sum*1.0/count);
    }
}

int main(int argc, char* argv[]){
    if(argc!=2)
        printf("\nsai doi so!");
    dem(argv[1]);
    printf("\n");
}