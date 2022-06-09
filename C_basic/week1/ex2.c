#include "stdio.h"
#include "string.h"

void hoan_doi(char str[], char c, char x){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==c){
            str[i]=x;
        }
    }
}

int main(){
    char str[200];
    char c, x;
    printf("Nhap xau: ");
    /*fflush(stdin); 
    gets(str);*/
    scanf("%s", str); getchar();
    printf("Ky tu thu nhat: ");
    scanf("%c", &c); getchar();
    printf("Ky tu thu hai: ");
    scanf("%c", &x); 
    printf("Xau ban dau: %s", str);
    printf("\nKy tu thu nhat: %c", c);
    printf("\nKy tu thu hai: %c", x);
    hoan_doi(str, c, x);
    printf("\nXau sau khi chuyen: %s", str);
    printf("\n");
}