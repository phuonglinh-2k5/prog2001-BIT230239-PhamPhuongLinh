#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap so (1-100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    printf("Hop le: %d", n);
    return 0;
}