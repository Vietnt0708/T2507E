#include<stdio.h>
int main(){
	int a;
	printf("nhap so:");
	scanf("%d",&a);
	
	int dao = 0;
	int chu_so;
	
	while (a != 0) {
        chu_so = a % 10;     
        dao = dao * 10 + chu_so;
        a = a / 10;             
    }
    printf("So dao nguoc la: %d\n", dao);
}
