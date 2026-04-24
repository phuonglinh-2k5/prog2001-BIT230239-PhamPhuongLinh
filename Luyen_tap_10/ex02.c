#include <stdio.h>

int main() {
    int a[5], b[5];
    int n = 5;

    // 1. Nhập mảng
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // 2. Ghi mảng vào file TEXT
    FILE *f = fopen("array.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    // ghi số lượng phần tử trước (cho xịn)
    fprintf(f, "%d\n", n);

    // ghi từng phần tử
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d ", a[i]);
    }

    fclose(f);

    // 3. Đọc lại từ file
    f = fopen("array.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    int m;
    fscanf(f, "%d", &m); // đọc số lượng

    for (int i = 0; i < m; i++) {
        fscanf(f, "%d", &b[i]);
    }

    fclose(f);

    // 4. In ra kiểm tra
    printf("\nMang doc tu file:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }

    // 5. So sánh
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("\n\nGhi va doc dung!\n");
    else
        printf("\n\nCo loi!\n");

    return 0;
}