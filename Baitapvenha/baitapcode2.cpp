#include <stdio.h>
int main(){
	
	int ngay;
	printf ("Nhap ngay:");
	scanf ("%d",&ngay);
	
	int thang;
	printf ("Nhap thang:");
	scanf ("%d",&thang);
	
	int nam;
	printf ("Nhap nam:");
	scanf ("%d",&nam);
	
	int ngay_max;
	
	if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12){
		ngay_max =31;
	}else{
		if(thang==4 || thang==6 || thang==9 || thang==11){
			ngay_max=30;
		}else{
			if(thang==2){
				if( nam % 400==0 || nam % 4==0 && nam % 100!=0){
					ngay_max=29;
				}else{
					ngay_max=28;
				}
			}else{
				printf("thang khong hop le\n");
				return 1;
			}
		}
	}
	
	if (ngay<1 || ngay > ngay_max){
		printf("ngay khong hop le\n");
		return 1;
	}
	ngay++;
	if(ngay == ngay_max){
		ngay=1;
		thang++;
		if(thang==12){
			thang=1;
			nam++;
		}
	}
	
	printf("ngay ke tiep la: %d/%d/%d\n", ngay,thang,nam);
	
	
}
