#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);

    int player[100];
    for (int i = 0; i < n; i++) {
        printf("Nhap so: ", i);
        scanf("%d", &player[i]);
    }
    int c = player[0];   
    int kcgn;
    if (player[0] - x >= 0)
        kcgn = player[0] - x;
    else
        kcgn = x - player[0];

    for (int i = 1; i < n; i++) {
        int d;
        if (player[i] - x >= 0)
            d = player[i] - x;
        else
            d = x - player[i];

        if (d < kcgn) {   // ki?m tra g?n hon
            kcgn = d;
            c = player[i];
        }
    }

    printf("Gia tri gan x nhat la: %d\n",c);
}
