#include <stdio.h>
int main(){
	int ngay;
	printf ("nhap ngay:");
	scanf("%d",&ngay);
	
	int thang;
	printf ("nhap thang:");
	scanf("%d",&thang);
	
	int nam;
	printf ("nhap nam:");
	scanf("%d",&nam);
	
	int ngay_thu=0;
	
	if(thang > 1){
		ngay_thu += 31;
    }
    if (thang > 2) {
        if (nam % 400 || nam % 4 && nam != 100){
            ngay_thu += 29;
		}else{
            ngay_thu += 28;
        }
    }
    if (thang > 3) ngay_thu += 31;
    if (thang > 4) ngay_thu += 30;
    if (thang > 5) ngay_thu += 31;
    if (thang > 6) ngay_thu += 30;
    if (thang > 7) ngay_thu += 31;
    if (thang > 8) ngay_thu += 31;
    if (thang > 9) ngay_thu += 30;
    if (thang > 10) ngay_thu += 31;
    if (thang > 11) ngay_thu += 30;

    ngay_thu += ngay;
    
    printf("Day la ngay thu %d trong nam.\n", ngay_thu);
	
		
	
}

