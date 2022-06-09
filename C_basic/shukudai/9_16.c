#include "stdio.h"

int giaiThua(int n){
    if(n==0)
        return 1;
    int gt=1;
    for(int i=1; i<=n; i++){
        gt*=i;
    }
    return gt;
}

int main(){
    int n;
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
        if(n<0)
            printf("\nn>=0!\n");
    }while(n<0);
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=giaiThua(i);
    }
    printf("sum = %d", sum);
    return 0;
}