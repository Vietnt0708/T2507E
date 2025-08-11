#include<stdio.h>
int main(){
	int a;
	printf("nhap so:");
	scanf("%d",&a);
	
	int x=0;
	int y=0;
	
	while(x<a){
		if(x%2==0 && x%3==0){
		y=x;
		}
		x++;
	}
	printf("so nguyen lon nhat chia het cho 2 va 3 la : %d\n",y);
}
