#include "stdio.h"
#include "stdlib.h"

int demCau(FILE *fin){
    int count = 0, c;
    char check = ' ';
    while((c=fgetc(fin))!=EOF){
        if((c=='.' || c=='!' || c=='?') && check != '.')
            count ++;
        check = c;
        printf("%c\n",c);
    }
    return count ;
}

int main(int argc, char* argv[]){
    if(argc<2){
        printf("Khong du tham so!\n");
        exit(-1);
    }
    FILE *fin = fopen(argv[1], "r");
    printf("File dau vao co so cau: %d cau.\n", demCau(fin));
    fclose(fin);
    return 0; 
}