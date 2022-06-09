#include "stdio.h"

void pt(int a, int b){
    if(a==0){
        if(b!=0)
            printf("\npt vo nghiem!");
        else
            printf("\npt vo so nghiem!");
    }
    else
        printf("\npt co nghiem duy nhat x = %.2lf", (double)(-b) / (double)a);
}

int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("\nb = ");
    scanf("%d",&b);
    printf("\npt: %dx + %d = 0",a,b);
    pt(a,b);
    return 0;
}