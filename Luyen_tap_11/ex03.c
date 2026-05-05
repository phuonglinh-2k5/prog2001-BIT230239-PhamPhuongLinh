#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Nhap N: ");
    scanf("%d", &n);

    for (i = 1; i <= 2*n - 1; i += 2) {
        sum += i;
    }

    printf("Tong %d so le dau tien = %d", n, sum);

    return 0;
}