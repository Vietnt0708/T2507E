#include <stdio.h>
int main(){
	int kwh;
	float tien_dien;
	printf("Nhap so kwh dien tieu thu:");
	scanf("%d",&kwh);
	
	if(kwh<=50){
		tien_dien = kwh * 1.678;
	}else
		if(kwh<=100){
			tien_dien = 50 * 1.678 + (kwh-50)* 1.734;
	}else
		if(kwh<=200){
			tien_dien = 50 * 1.678 + 50 * 1.734 +(kwh-100)*2.014;
	}else{
		tien_dien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 +(kwh - 200)*2.536;
	}
	printf("so tien dien can tra la: %.2f dong\n", tien_dien);

	
	
}
 
