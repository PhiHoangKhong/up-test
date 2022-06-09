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

double tinh_e_mu_x(double x, int M){
    int i=0;
    double kq = 0;
    while(i<=M){
        kq += (double)(x_mu_n(x,i))/(double)(giaiThua(i));
        i++;
    }
    return kq;
}

int main(){
    int M;
    double x;
    printf("Nhap x: ");
    scanf("%lf",&x);
    printf("Nhap M: ");
    scanf("%d",&M);
    printf("e^%lf = %lf",x, tinh_e_mu_x(x, M));
    return 0;
}