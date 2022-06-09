#include "stdio.h"

void caesar(char str[], int offset){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = (str[i] -'a' + offset)%26 + 'a';
        }
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = (str[i] - 'A' + offset)%26 + 'A';
        }
        i++;
    }
    printf("%s ",str);
}

int main(){
    char str[] = "abxzy";
    caesar(str, 2);
    return 0;
}