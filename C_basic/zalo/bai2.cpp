#include "iostream"
using namespace std;

int main(){
    int i,j,k=0;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[2*n+1][2*n+1];
    for(i=0; i<2*n+1;  i++){
        if(k==n) 
            k=0;
        for(j=0; j<2*n+1; j++){
            a[i][j] = k;
            a[j][i] = k;
            a[2*n-j][2*n-i] = k;
            a[2*n-i][2*n-j] = k;
        }
        k++;
    }
    for(i=0; i<2*n+1;  i++){
        a[0][i] = n;
        a[i][0]= n;
        a[2*n][i] = n;
        a[i][2*n] = n;
    }
    for(i=0; i<2*n+1;  i++){
        for(j=0; j<2*n+1; j++){
            cout << a[i][j] << "  ";
        }
        cout << ("\n");
    }
    cout << ("\n");
    return 0;
}