#include <stdio.h>

void m(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        float x = -b / a;
        printf("Nghiem x = %.2f\n", x);
    }
}

int main() {
    float a, b;

    printf("Nhap a, b: ");
    scanf("%f %f", &a, &b);

    m(a, b);

    return 0;
}