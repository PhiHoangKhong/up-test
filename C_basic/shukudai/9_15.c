#include "stdio.h"

int check(int n){
    if(n%2==1)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(check(n)==1)
        printf("So le!");
    else
        printf("So chan!");    
    return 0;
}