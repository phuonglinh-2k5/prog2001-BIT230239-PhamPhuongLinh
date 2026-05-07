#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Nhap ky tu: ");
    scanf("%c", &c);

    // Kiểm tra ký tự số
    if (isdigit(c)) {
        printf("Ky tu so la: %c", c);
    }
    // Kiểm tra ký tự chữ
    else if (isalpha(c)) {
        c = toupper(c); // chuyển sang chữ hoa
        printf("Ky tu chu la: %c", c);
    }
    else {
        printf("Khong phai ky tu so hoac chu cai");
    }

    return 0;
}