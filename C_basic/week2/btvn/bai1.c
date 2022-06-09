#include "stdio.h"
#include "stdlib.h"
#include "math.h"
enum {SUCESS, FAIL};

void maHoa(FILE *fin, int offset, FILE *fout){
    int c;
    while((c=fgetc(fin))!=EOF){
        if(c>='a' && c<='z'){
            c = (c - 'a' + offset)%26 + 'a';
            fputc(c, fout);
        }
        if(c>='A' && c<='Z'){
            c = (c -'A' + offset)%26 + 'A';
            fputc(c, fout);
        }
    }
}

void giaiMa(FILE *fin, int offset, FILE *fout){
    int c;
    while((c=fgetc(fin))!=EOF){
        if(c>='a' && c<='z'){
            c = ('a' + (c - 'a' + (26 - offset))%26) ;
            fputc(c, fout);
        }
        if(c>='A' && c<='Z'){
            c = ('A' + (c - 'A' + (26 - offset))%26) ;
            fputc(c, fout);
        }
    }
}

int main(int argc, char *argv[]){
    if(argc > 4){
        printf("Thua doi so!\n");
        exit(-1);
    }
    else if(argc < 4){
        printf("Thieu doi so!\n");
        exit(-1);
    }
    else{
        FILE *fin, *fout;
        int  reval = SUCESS;

        fin = fopen(argv[1], "r");
        fout = fopen(argv[3], "w");
        if((fin = fopen(argv[1], "r")) == NULL){
            printf("cannot open %s.\n",argv[1]);
            exit(-1);
        }
        else if((fout = fopen(argv[3], "w")) == NULL){
            printf("cannot open %s.\n",argv[3]);
            exit(-1);
        }
        else{
            //maHoa(fin, atoi(argv[2]), fout);   
            giaiMa(fin, atoi(argv[2]), fout);              
            fclose(fin);
            fclose(fout);
            printf("\n");
        }
        return reval;
   }
}