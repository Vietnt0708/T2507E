#include<stdio.h>
int main(){
	int a;
	printf("nhap so:");
	scanf("%d",&a);
	
	int sole=0;
	
	while(sole<a){
		if((sole%2)!=0){
			printf("so le nho hon la: %d\n",sole);
		}
		sole++;
	}
	
	
	
}

	
