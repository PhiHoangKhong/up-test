#include "stdio.h"
#include "stdlib.h"
#define max_len 10000
enum {success, fail};

int demDong(char *filename){
    FILE * fin = fopen(filename, "r");
    if(NULL==fin)
        exit(-1);
    int count = 0;
    char buff[max_len];
    while(fgets(buff, max_len, fin)!=NULL)
        count ++;
    fclose (fin);
    return count;
}

int main(int argc, char* argv[]){
    if(argc<2){
        printf("Khong du tham so!\n");
        exit(-1);
    }
    printf("File dau vao co so dong: %d dong.\n", demDong(argv[1]));
    return 0;
}