#include<stdio.h>
int S(int x , int y){
	int a = 1;
	for(int i = 1; i <= y; i++) {
        a = a * x;
    }
    return a;
}
	int main() {
    int x, y;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    int kq = S(x, y);
    printf("ket qua cua %d^%d = %d\n", x, y, kq);

}
