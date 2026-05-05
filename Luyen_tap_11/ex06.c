#include <stdio.h>


int sumSquare(int n) {
    if (n == 0)
        return 0;
    return n * n + sumSquare(n - 1);
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n khong hop le!");
        return 0;
    }

    printf("Tong S = %d", sumSquare(n));

    return 0;
}