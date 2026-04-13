#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    float b;
    char c;
    int d;

    printf("Nhap int: ");
    scanf("%d", &a);

    printf("Nhap float: ");
    scanf("%f", &b);

    printf("Nhap char: ");
    scanf(" %c", &c);

    printf("Nhap bool (0 hoac 1): ");
    scanf("%d", &d);

    printf("%d, %.2f, %c, %d\n", a, b, c, d);

    return 0;
}