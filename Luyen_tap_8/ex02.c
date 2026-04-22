#include <stdio.h>

typedef struct {
    int id;
    char ten[100];
    float luong;
} Employee;

int main(void) {
    Employee employees[] = {
        {1, "Nguyen Van A", 8500.0f},
        {2, "Tran Thi B", 9200.5f},
        {3, "Le Van C", 7800.0f}
    };
    int soLuongNhanVien = sizeof(employees) / sizeof(employees[0]);

    printf("Danh sach nhan vien:\n");
    for (int i = 0; i < soLuongNhanVien; i++) {
        printf("Nhan vien %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Ten: %s\n", employees[i].ten);
        printf("Luong: %.2f\n", employees[i].luong);
    }

    return 0;
}
