#include<stdio.h>

int soNguyen(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i * i <= n; i++){
			if( n % i == 0){
				return 0;
			}
		}
		return 1;
	}
int main(){
int n, i;
int arr[100]; 
int check = 0;

printf("Nhap so luong phan tu: ");
scanf("%d", &n);

printf("Nhap %d so nguyen:\n", n);
	for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

	printf("Cac so nguyen to trong mang: ");
    for (i = 0; i < n; i++){
        if (soNguyen(arr[i])) {
            printf("%d ", arr[i]);
            check = 1;
        }
    }

    if (!check){
        printf("No prime number");
    }

    printf("\n");
    return 0;
}
