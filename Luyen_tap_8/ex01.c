#include <stdio.h>

typedef struct {
    char mssv[20];
    char ten[100];
} Student;

int main(void) {
    Student student = {"22123456", "Nguyen Van A"};

    printf("Thong tin sinh vien:\n");
    printf("MSSV: %s\n", student.mssv);
    printf("Ten: %s\n", student.ten);

    return 0;
}
