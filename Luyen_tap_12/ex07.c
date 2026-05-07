#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Nhap ky tu: ");
    scanf("%c", &c);

    if (isdigit(c)) {
        printf("Ky tu so la: %c", c);
    }
    else if (isalpha(c)) {
        c = toupper(c);
        printf("Ky tu chu la: %c", c);
    }
    else {
        printf("Khong phai ky tu so hoac chu cai");
    }

    return 0;
}
