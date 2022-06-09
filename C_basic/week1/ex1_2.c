#include "stdio.h"
#include "string.h"
#define max_len 128
int main(){
    char str[201];
    int dem[max_len] = {0};
    printf("Nhap xau: ");
    gets(str);
    for(int i=0; i<strlen(str); i++){
            dem[str[i]]++;
    }
    for(int i=0; i<max_len; i++){
        if(dem[i]>0){
            printf("%c - %d\n",i ,dem[i]);
        }
    }
    printf("\n");
}