#include<stdio.h>
int BCNN(int a, int b){
	int kq = 0;
	for(int i = 1;i <= (a*b); i++ ){
		if( i%a==0 && i%b==0){
			kq=i;
			break;
		}
	}
}
int main(){
	int a ,b;
	printf("nhap so a :");
	scanf("%d",&a);
	printf("nhap so b :");
	scanf("%d",&b);
	
	int kq = BCNN(a,b);
	printf("BCNN cua %d va %d la : %d",a,b,kq);
}
