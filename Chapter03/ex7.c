#include <stdio.h>

int main() {
    float a, b;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Loi: Khong the chia cho 0!\n");
    } else {
        printf("Ket qua a / b = %.2f\n", a / b);
    }

    return 0;
}