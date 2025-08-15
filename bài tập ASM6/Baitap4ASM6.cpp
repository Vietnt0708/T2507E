#include<stdio.h>
int main(){
	int player[100];
	int a , i;
	int slcc = -1;
	
	printf("so phan tu cua mang:");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("\nnhap so %d : ",i);
		scanf("%d",&player[i]);
	}
	 for (int i = a - 1; i >= 0; i--){
        if (player[i] % 2 != 0) { 
            slcc = player[i];
            break;
        }
    }
    if (slcc != -1)
        printf("So le cuoi cung trong mang la: %d\n", slcc);
    else
        printf("Mang khong co so le\n");
}
