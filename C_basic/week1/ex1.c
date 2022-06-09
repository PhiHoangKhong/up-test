#include "stdio.h"
#include "string.h"
#define max_len 26

int main(){
    char str[201];
    int  dem[max_len] = {0};
    printf("Nhap xau: ");
    gets (str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]>='a' && str[i]<='z'){
            dem[str[i] - 'a'] ++;
        }
        if(str[i]>='A' && str[i]<='Z'){
            dem[str[i] - 'A'] ++;
        }
    }
    printf("\nXau vua nhap: %s",str);
    printf("\ncac ky tu la:\n");
    for(int i=0; i<strlen(str); i++){
        if(dem[i] > 0){
            printf("%c - %d\n",i+'a', dem[i]);
        }
    }
    printf("\n");
}