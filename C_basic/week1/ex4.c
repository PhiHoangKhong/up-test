#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]){
    int a,b;
    if(argc > 3){
        printf("Thua tham so!");
        printf("\n");
        return -1;
    }
    else if(argc < 3){
        printf("Thieu tham so!");
        printf("\n");
        return -1;
    }
    else{
        a = atoi(argv[1]);
        b = atoi(argv[2]); 
    }
    printf("Tong 2 so la: %d",a+b);
    printf("\n");
    return 0;
}