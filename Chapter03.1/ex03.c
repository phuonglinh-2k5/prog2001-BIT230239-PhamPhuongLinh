#include <stdio.h>

int main() {
    int n;
    printf("Nhap so (1-7): ");
    scanf("%d", &n);

    switch (n) {
        case 1: printf("Chu Nhat"); break;
        case 2: printf("Thu Hai"); break;
        case 3: printf("Thu Ba"); break;
        case 4: printf("Thu Tu"); break;
        case 5: printf("Thu Nam"); break;
        case 6: printf("Thu Sau"); break;
        case 7: printf("Thu Bay"); break;
        default: printf("Khong hop le");
    }

    return 0;
}