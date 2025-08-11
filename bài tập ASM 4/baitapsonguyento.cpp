#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen:");
	scanf("%d",&a);
	
	if(a<=1){
		printf("khong phai so nguyen to\n");
		return 0;
	}
	int i = 2;
    int la_nguyen_to = 1; 

    while (i <= a / 2) {
        if (a % i == 0) {
            la_nguyen_to = 0;
            break;
        }
        i++;
    }

    if (la_nguyen_to){
        printf("%d la so nguyen to\n", a);
    } else {
        printf("%d khong phai so nguyen to\n", a);
    }

	
	
}
