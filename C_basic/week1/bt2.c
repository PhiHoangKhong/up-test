#include "stdio.h"
#include "string.h"

int main(){
    char str[200];
    printf("Input: ");
    gets(str);
    for(int i=0; i<strlen(str); i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            str[i] = '\n';
        }
    }
    printf("\nOutput: ");
    printf("\n%s", str);
    printf("\nEND!");
    printf("\n");
}