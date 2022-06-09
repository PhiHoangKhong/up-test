#include "stdio.h"

int isLeapYear(int n){
    if((n%4==0 && n%100!=0) || n%400==0)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    printf("Nhap nam: ");
    scanf("%d",&n);
    if(isLeapYear(n)==1)
        printf("La nam nhuan!");
    else
        printf("Khong la nam nhuan!");    
    return 0;
}