#include <stdio.h>
int main() {
    int n;
    int toan_so_le = 1; 

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    
    for(; n != 0; n = n / 10) {
        int cs = n % 10; 
        if(cs % 2 == 0) {
            toan_so_le = 0; 
            break;      
        }
    }

    if(toan_so_le)
        printf(" so co toan chu so le\n");
    else
        printf(" so co chu so chan\n");
}
