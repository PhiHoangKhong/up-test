#include "stdio.h"
#include <stdlib.h>
#include "string.h"

typedef struct danhSach{
    char name[51];
    char cccd[15];
    char sdt[11];
    double nhietDo;
    int ha1;
    int ha2;
} DS;

// trong ham se cap phat dong 1 vung nho moi cho mang ds --> can truy cap vao dia chi cua con tro ds
// bien don gian nhu kieu int, muon thay doi gia tri trong ham --> can truyen vao dia tri *int
// neu muon thay doi gia tri cua vung nho mang ds --> can truyen vao dia chi vung nho do --> **ds
void nhap(DS **ds, int *size){
    int n;
    printf("So luong sinh vien can nhap: ");
    scanf("%d",&n); getchar();
    DS *danhSach;
    danhSach = (DS*) malloc (n*sizeof(DS));
    printf("Bat dau nhap thong tin tiem chung!\n");
    for(int i=0; i<n; i++){
        printf("Thong tin nguoi tiem %d\n", i+1);
        printf("name: "); fflush(stdin); gets(danhSach[i].name); 
        printf("cccd: "); fflush(stdin); gets(danhSach[i].cccd); 
        printf("sdt: "); fflush(stdin); gets(danhSach[i].sdt);
        printf("Nhiet do: "); scanf("%lf",&danhSach[i].nhietDo); 
        printf("ha1: "); scanf("%d",&danhSach[i].ha1); 
        printf("ha2: "); scanf("%d",&danhSach[i].ha2); getchar();
    }
    *ds = danhSach;
    *size = n;
}

void xuat(const DS *ds, int n){
    printf("\nDanh sach tiem chung\n");
    printf(" %s %s \t\t %s \t\t %s \n", "STT", "Name", "cccd", "sdt" );
    for(int i=0; i<n; i++){
        printf("%d %s \t\t %s \t\t %s \n", i+1, ds[i].name, ds[i].cccd, ds[i].sdt);
    }
}

int main(){
    DS *ds;
    int n;
    nhap(&ds, &n);
    xuat(ds, n);
    return 0;
}