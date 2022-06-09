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

double  x_mu_n(double x, int n){
    double kq=1;
    for(int i=1; i<=n; i++){
        kq*=x;
    }
    return kq;
}

double arcsin_x(double x, int M){
    int i=0;
    double kq = 0;
    while(i<=M){
        kq += ((double)(giaiThua(2*i)*(x_mu_n(x,2*i+1))))/(double)(((giaiThua(i)*x_mu_n(2,i)))*((giaiThua(i)*x_mu_n(2,i)))*(2*i+1));
        i++;
    }
    return kq;
}

int main(){
    int M;
    double x;
    do{
        printf("Nhap x: ");
        scanf("%lf",&x);
    }while(-1>=x || 1<x);
    printf("Nhap M: ");
    scanf("%d",&M);
    printf("arcsin(%lf) = %lf",x, arcsin_x(x, M));
    return 0;
}