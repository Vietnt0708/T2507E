#include<stdio.h>

int UCLN(int a , int b){
	int kq =0;
	for(int i = 1;(i<=a) && (i<=b);i++){
		if(a%i==0 && b%i==0){
			kq = i;
		}
	}	
	return kq;
}
int main(){
	int a , b;
	printf("nhap so a :\n");
	scanf("%d",&a);
	printf("nhap so b :\n");
	scanf("%d",&b);
	
	int kq = UCLN(a,b);
	
	printf("UCLN cua %d va %d la :%d\n",a,b,kq);
	
}
