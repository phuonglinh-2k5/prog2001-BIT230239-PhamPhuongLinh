#include <stdio.h>

int main() {
    float km, tien;

    printf("Nhap so km: ");
    scanf("%f", &km);

    if (km <= 0) {
        printf("So km khong hop le");
        return 0;
    }

    // Tính tiền taxi
    if (km <= 1) {
        tien = km * 15000;
    }
    else if (km <= 5) {
        tien = 15000 + (km - 1) * 13000;
    }
    else {
        tien = 15000 + 4 * 13000 + (km - 5) * 11000;
    }

    // Giảm 10% nếu trên 120km
    if (km > 120) {
        tien = tien * 0.9;
    }

    printf("Tien taxi = %.0f VND", tien);

    return 0;
}