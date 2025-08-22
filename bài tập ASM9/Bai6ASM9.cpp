#include <stdio.h>
int tongChuSo(int n){
    int tong = 0;
    while(n > 0) {
        tong = tong + n % 10; 
        n = n / 10;           
    }
    return tong;
}

int main(){
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    int kq = tongChuSo(n);
    printf("Tong cac chu so la: %d\n", kq);

}
