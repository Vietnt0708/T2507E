#include <stdio.h>

int timMax(int arr[], int n) {
    int max = arr[0]; 
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
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

    int kq = timMax(arr, n);
    printf("Phan tu lon nhat la: %d\n", kq);


}
