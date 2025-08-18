#include<stdio.h>
int main(){
	int player[100];
	int n , x ,c;
	
	printf("nhap so phan tu : ");
	scanf("%d",&n);
	
	printf("Nhap so x: ");
    scanf("%d", &x);
	
	for(int i=0;i<n;i++){
		printf("nhap so : ", i);
		scanf("%d",&player[i]);
	}
	int a = player[0];
    int kc;
    if (player[0] - x >= 0)
        kc = player[0] - x;
    else
        kc = x - player[0];

    for (int i = 1; i < n; i++) {
        int d;
        if (player[i] - x >= 0)
            d = player[i] - x;
        else
            d = x - player[i];

        if (d > kc) {
            kc = d;
            c = player[i];
        }
    }

    printf("Gia tri xa x nhat la: %d\n", c);

	
}
