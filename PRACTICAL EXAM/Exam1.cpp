#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	char b[100];
	
	printf("nhap chuoi a : ");
	scanf("%s",&a);
	printf("nhap chuoi b : ");
	scanf("%s",&b);
	
	if (strlen(a) < strlen(b)) {
        if (strstr(b , a) != 0)
            printf("Yes\n");
        else
            printf("No\n");
    } else {
        if (strstr(a , b) != 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
