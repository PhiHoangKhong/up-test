#include "stdio.h"

void tach_so(double x, int *nguyen, double *thapPhan){
    *nguyen = (int)x;
    *thapPhan = x - *nguyen;
}

int main(){
    double x, thapPhan;
    int nguyen;
    printf("Nhap x: ");
    scanf("%lf",&x);
    tach_so(x, &nguyen, &thapPhan);
    printf("\nNguyen: %d", nguyen);
    printf("\nThap phan: %.2lf", thapPhan);
    printf("\n");
    return 0;
}