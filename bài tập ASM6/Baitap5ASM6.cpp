#include<stdio.h>
int main(){
	int a , i;
	printf("nhap so phan tu : ");
	scanf("%d",&a);
	
	int player[100];
	int sdnn = -1;
	
	for(i=0;i<a;i++){
		printf("\nnhap so %d : ",i);
		scanf("%d",&player[i]);
	}
	for(i=0;i<a;i++){
		if(player[i]>0){
			if(sdnn == -1 || player[i] < sdnn){
                sdnn = player[i];
            }
		}
	}
	if(sdnn!=-1){
			printf("so duong nho nhat la: %d",sdnn);
	}else{
		printf("khong co so dung nho nhat!"
		);
	}
}
