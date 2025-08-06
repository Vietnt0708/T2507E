#include <stdio.h>
int main(){
	float a;
	printf("Thu_nhap (Trieu VND):");
	scanf("%f",&a);
	float thue;
	
	if(a<=11){
		printf("Ban khong can phai dong thue");
	}else{
		if(a<= 18){
			thue =  5*0.05 + 5*0.1 + (a -10)*0.15;
		}else{
			if(a<=32){
				thue = 5*0.05 + 5*0.1 + 8*0.15 + (a -18)*0.2;
			}else{
				if(a<=52){
					thue = 5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 + (a-32)*0.25;
				}else{
					if(a<=80){
						thue = 5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 + 20*0.25 + (a-52)*0.3;
					}else{
						if(a>80){
							thue = 5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 + 20*0.25 + 28*0.3 + (a-80)*0.35;
						}
					}
				}
			}
		}
	}	
	
	printf(" //So tien nop thue la: %.2f Trieu VND\n",thue);
	
	
	
}
