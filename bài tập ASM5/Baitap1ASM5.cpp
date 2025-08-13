#include <stdio.h>
int main(){
	int a;
	printf("nhap so:");
	scanf("%d",&a);
	
	int tong = 0;
	
	for(int x=1;x<=a;x++){
		if(a%x==0){
			tong += x;
	   	}
    }
	printf("tong uoc cua no la : %d",tong);
}
