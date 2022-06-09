#include "stdio.h"
#include "stdlib.h"
enum {SUCCESS, FAIL};

void count(FILE *fin){
    int c;
    int hoa=0, thuong=0, dau=0;
    while((c=fgetc(fin))!=EOF){
        if(c>='a' && c<='z'){
            thuong++;
        }
        if(c>='A' && c<='Z'){
            hoa++;
        }
        if(c=='.' || c==',' || c=='?'){
            dau++;
        }
    }
    printf("\nHoa = %d", hoa);
    printf("\nThuong = %d", thuong);
    printf("\nDau = %d", dau);
}

int main(int argc, char *argv[]){
    if(argc<2){
        printf("thieu tham so!\n");
        exit(-1);
    }
    else if(argc>2){
        printf("thua tham so!\n");
        exit(-1);
    }
    else{
        FILE *fin;
        int  reval = SUCCESS;
        if((fin = fopen(argv[1], "r")) == NULL){
            printf("cannot open %s.\n",argv[1]);
            exit(-1);
        }
        else{
            count(fin);
            fclose(fin);
            printf("\n");
        }
        return reval;
    }
}