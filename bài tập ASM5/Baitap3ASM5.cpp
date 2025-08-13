#include <stdio.h>

int main() {
   int n;
   printf("Nhap so:");
   scanf("%d",&n);
   
   int tong = 0;
   
   for(  ; n != 0; n = n / 10){
        tong += n % 10; 
	}   

    printf("Tong cac chu so = %d\n", tong);
}
