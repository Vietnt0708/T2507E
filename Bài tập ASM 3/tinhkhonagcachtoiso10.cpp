#include <stdio.h>;

int main(){
	
	int a;
	printf("nhap so nguyen thu nhat:");
	scanf("%d",&a);

	int b;
	printf("nhap so nguyen thu hai:");
	scanf("%d",&b);
	
	int kca , kcb;
	
	if (a>=10){
		kca = a - 10;
	}else{
		kca = 10 - a;
	}
	
	if (b>=10){
		kcb = b - 10;
	}else{
		kcb = 10 - b;
	}
	
	if (kca > kcb){
		printf("%d gan voi so 10 hon\n",b);
	}else if(kca < kcb){
		printf("%d gan voi so 10 hon\n",a);
	}else{
		printf("bang nhau\n");
	}
	
	
	
}

