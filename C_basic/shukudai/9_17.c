#include "stdio.h"

void chuyen(int n){
    while(n!=0){
        int x = n%2;
        printf("%d",x);
        n /= 2;
    }
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    chuyen(n);
    printf("\n");
    return 0;
}