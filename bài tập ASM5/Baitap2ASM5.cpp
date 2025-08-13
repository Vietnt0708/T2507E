#include<stdio.h>
int main(){
	int a,b;
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu hai:\n");
	scanf("%d",&b);
	
	int ucln=1;
	int bcnn;
	
	
	for(int x=1; x<=a && x<=b ;x++){
		if(a%x == 0 && b%x==0){
			ucln = x;
		}
	}
	bcnn = (a * b)/ucln;
	
	printf("Uoc chung lon nhat: %d\n", ucln);
    printf("Boi chung nho nhat: %d\n", bcnn);
}
