#include<stdio.h>
int main(){
	int n, i;
	printf("nhap so :");
	scanf("%d",&n);
	int tong=0;
	int dem = 0;
	
	int player [100];
	
	for( int i =0; i < n;i++){
		printf("nhap so %d:", i);
		scanf("%d",&player[i]);
	}
	for(int i = 0;i<n;i+=2){
	    if(player[i] % 2!=0){
	    	tong += player[i];
	    	dem++;
		}
	}
		if(dem > 0){
        float tbc = (float)tong / dem;
        printf("Trung binh cong cac so le = %.2f\n", tbc);
    } else {
        printf("Khong co so le trong mang.\n");
    }
}
