#include "stdio.h"
#include "string.h"
#define max_len 52

int main(){
    char str[201];
    int  dem[max_len] = {0};
    printf("Nhap xau: ");
    gets (str);
    for(int i=0; i<max_len; i++){
        if(str[i]>='a' && str[i]<='z'){
            dem[str[i] - 'a' + 26] ++; // tu 26 den 52 luu so luong chu thuong
        }
        if(str[i]>='A' && str[i]<='Z'){
            dem[str[i] - 'A'] ++;
        }
    }
    printf("\nXau vua nhap: %s",str);
    printf("\ncac ky tu la:\n");
    for(int i=0; i<max_len; i++){
        if(dem[i] > 0 && i < 26){
            printf("%c - %d\n",i+'A', dem[i]);
        }
        if(dem[i] > 0 && i >= 26){
            printf("%c - %d\n",i+'A'+6, dem[i]); // chu thuong - hoa = 32 ma thu tu da cach nhau 26 nen bay can cong them 6 de duoc 32
        }
    }
    printf("\n");
}