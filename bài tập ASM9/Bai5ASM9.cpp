#include <stdio.h>
int daonguoc(int n){
    int daoso = 0;
    while(n > 0) {
        daoso = daoso * 10 + n % 10; 
        n = n / 10;                  
    }
    return daoso;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    int kq = daonguoc(n);
    printf("So dao nguoc la: %d\n", kq);
}
