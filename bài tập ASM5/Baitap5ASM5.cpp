#include <stdio.h>

int main() {
    int n;
	int x = 0;
	int chu_so;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    for( ; n != 0; n = n / 10) {
         chu_so = n % 10; 
        if(chu_so > x) {
            x = chu_so; 
        }
    }
    printf("Chu so lon nhat la: %d\n", x);
}
