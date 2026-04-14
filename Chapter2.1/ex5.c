#include <stdio.h>

int main() {
    int x;
    printf("Nhap so nguyen: ");
    scanf("%d", &x);

    if (x >= 10 && x <= 50)
        printf("x nam trong khoang tu 10 den 50.\n");
    else
        printf("x khong nam trong khoang tu 10 den 50.\n");

    return 0;
}