#include <stdio.h>

int timMin(int arr[], int n) {
    int min = arr[0]; 
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i]; 
            
        }
    }
    return min;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int kq = timMin(arr, n);
    printf("Phan tu nho nhat la: %d\n", kq);

    return 0;
}
