#include <stdio.h>
int main(){
	
	float a;
	printf("nhap so tien mua hang:");
	scanf("%f",&a);
	
	float so_tien_phai_tra;
	
	if(a>=500){
		so_tien_phai_tra = a-(a * 0.1);
	}else if(a>=200 && a<=499){
		so_tien_phai_tra = a-(a * 0.05);
	}else{
		so_tien_phai_tra = a;
	}
	printf("so tien phai tra la: %f ", so_tien_phai_tra);
	
	
}
