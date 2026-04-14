#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
    printf("Tich: %d\n", a * b);

    if (b != 0) {
        printf("Thuong: %d\n", a / b);
        printf("Du: %d\n", a % b);
    } else {
        printf("Khong the chia cho 0\n");
    }
return 0;

}