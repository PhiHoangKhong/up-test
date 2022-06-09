#include "stdio.h"
#include "stdlib.h"
enum {SUCESS, FAIL};

void copy(FILE *fin, FILE *fout){
    int c;
    while((c=fgetc(fin))!=EOF){
        fputc(c, fout);
        putchar(c);
    }
}

int main(int argc, char *argv[]){
    if(argc<3){
        printf("thieu tham so!\n");
        exit(-1);
    }
    else if(argc>3){
        printf("thua tham so!\n");
        exit(-1);
    }
    else{
        FILE *fin, *fout;
        int  reval = SUCESS;
        if((fin = fopen(argv[1], "r")) == NULL){
            printf("cannot open %s.\n",argv[1]);
            exit(-1);
        }
        else if((fout = fopen(argv[2], "w"))==NULL){
            printf("cannot open %s.\n",argv[2]);
            exit(-1);
        }
        else{
            copy(fin, fout);
            fclose(fin);
            fclose(fout);
            printf("\n");
        }
        return reval;
    }
}