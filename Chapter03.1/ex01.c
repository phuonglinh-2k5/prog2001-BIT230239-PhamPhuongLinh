#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    printf("So nho nhat: %d", min);
    return 0;
}