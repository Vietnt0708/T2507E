#include<stdio.h>

int tinhTong(int n ){
	int tong = 0;
	while(n > 0){
		tong += n % 10;
		n = n /10;	
	}
	return tong;
}
	int main(){
		int n;
		printf("nhap so nguyen:");
		scanf("%d",&n);
		
		int kq = tinhTong(n);
		printf("tinh tong cac chu so cua %d la : %d",n , kq);
	}
