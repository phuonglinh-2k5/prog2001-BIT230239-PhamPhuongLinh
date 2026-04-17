#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int min;

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    printf("So nho nhat: %d", min);
    return 0;
}
