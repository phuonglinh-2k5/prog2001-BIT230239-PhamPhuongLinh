#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int min;

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    printf("So nho nhat la: %d\n", min);

    return 0;
}