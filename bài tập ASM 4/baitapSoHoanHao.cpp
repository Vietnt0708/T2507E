#include<stdio.h>
int main(){
	int a;
	printf("nhap so:");
	scanf("%d",&a);
	
	int x=1;
	int y=0;
	
	while(x<a){
		if(a%x==0){
			y += x;
		}
		x++;
	}
	if(y==a){
		printf("so hoan hao:%d\n",y);
	}else{
		printf("so khong hoan hao\n");
	}
	
	
}
