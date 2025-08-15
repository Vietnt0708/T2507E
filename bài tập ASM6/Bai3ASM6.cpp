#include<stdio.h>
int main(){
	int a;
	printf("nhap so phan tu:");
	scanf("%d",&a);
	
	int player[100];
	
	for(int i=0;i<a;i++){
		printf("nhap so %d :",i);
		scanf("%d",&player[i]);
	}
	int timthay=0;
	int x;
	printf("nhap so x: ");
	scanf("%d",&x);
	
	for(int i=0;i<a;i++){
		if(player[i]==x){
		timthay=1;
		}
	}
	if(timthay) {
        printf("So %d co trong mang.\n", x);
    } else {
        printf("So %d khong co trong mang.\n", x);
    }
	
}
