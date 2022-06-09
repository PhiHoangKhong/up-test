#include "stdio.h"
#include "stdlib.h"
enum{SUCCESS, FAIL};

void check(FILE *fin1, FILE *fin2, FILE *fout){
    int n;
    fscanf(fin1, "%d", &n); // gakusei no kazu wo yomu.
    int mssv[n];
    char name[n][30]; // n gakusei,saizu no namae no gakusei ha 30 desu.
    for(int i=0; i<n; i++){
        fscanf(fin1, "%d", &mssv[i]);
        fgets(name[i], 30, fin1);
    }
    int m;
    //int diHoc[n] = {0};
    int diHoc[n];
    for(int i=0; i<n; i++){
        diHoc[i]= 0;
    }
    while(fscanf(fin2, "%d", &m)>0){
        for(int i=0; i<n; i++){
            if(mssv[i] == m){
                diHoc[i] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(diHoc[i]==0)
            fprintf(fout, "%d %s", mssv[i], name[i]);
    }
}

int main(int argc, char* argv[]){
    if(argc != 4){
        printf("Loi tham so!\n");
        exit(-1);
    }
    else{
        FILE *fin1, *fin2, *fout;
        int reval = SUCCESS;
        if((fin1 = fopen(argv[1], "r"))==NULL){
            printf("can not open file %s!\n", argv[1]);
        }
        else if((fin2 = fopen(argv[2], "r"))==NULL){
            printf("can not open file %s!\n", argv[2]);
        }
        else if((fout = fopen(argv[3], "w"))==NULL){
            printf("can not open file %s!\n", argv[3]);
        }
        else{
            check(fin1, fin2, fout);
        }
    }
}