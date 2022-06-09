#include "stdio.h"

int fibo(int n){
    if(n==1 || n==2)
        return 1;
    else    
        return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("fibo thu %d = %d",n,fibo(n));
    return 0;
}