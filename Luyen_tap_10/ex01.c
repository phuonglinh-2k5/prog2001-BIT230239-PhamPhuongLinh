#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1, s2;

    // Nhập dữ liệu
    printf("Nhap ten: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &s1.age);

    // Ghi file TEXT
    FILE *f = fopen("student.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fprintf(f, "%s\n%d\n", s1.name, s1.age);
    fclose(f);

    // Đọc lại từ file
    f = fopen("student.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fgets(s2.name, sizeof(s2.name), f);
    s2.name[strcspn(s2.name, "\n")] = '\0';
    fscanf(f, "%d", &s2.age);

    fclose(f);

    // In ra kiểm tra
    printf("\n--- Du lieu doc tu file ---\n");
    printf("Ten: %s\n", s2.name);
    printf("Tuoi: %d\n", s2.age);

    // So sánh
    if (strcmp(s1.name, s2.name) == 0 && s1.age == s2.age)
        printf("Ghi va doc dung!\n");
    else
        printf("Co loi!\n");

    return 0;
}