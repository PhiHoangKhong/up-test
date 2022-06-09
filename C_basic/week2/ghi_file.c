#include "stdio.h"

int main(){
    FILE *f;
    f = fopen("ghi.txt", "w");
    fputc('c', f);
    fclose(f);
}