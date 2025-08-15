#include<stdio.h>
int main(){
	int player[100];
	int n , i;
	int tong = 0;
	int dem=0;
	
	printf("\nnhap so vao day:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("nhap so %d: ",i);
		scanf("%d",&player[i]);
	}
	for(int i=0;i<n;i++){
		if(player[i]%2 != 0){
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
