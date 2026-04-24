#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1[3], p2[3];
    int n = 3;

    printf("Nhap %d san pham:\n", n);

    getchar(); // ✅ chỉ đặt 1 lần trước vòng lặp

    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d\n", i + 1);

        printf("Ten: ");
        fgets(p1[i].name, sizeof(p1[i].name), stdin);
        p1[i].name[strcspn(p1[i].name, "\n")] = '\0';

        printf("Gia: ");
        scanf("%f", &p1[i].price);
        getchar(); // ✅ xóa '\n' sau scanf
    }

    // 3. Ghi file TEXT
    FILE *f = fopen("product.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fprintf(f, "%d\n", n); // ghi số lượng

    for (int i = 0; i < n; i++) {
        fprintf(f, "%s\n%.2f\n", p1[i].name, p1[i].price);
    }

    fclose(f);

    // 4. Đọc lại file TEXT
    f = fopen("product.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    int m;
    fscanf(f, "%d\n", &m);

    for (int i = 0; i < m; i++) {
        fgets(p2[i].name, sizeof(p2[i].name), f);
        p2[i].name[strcspn(p2[i].name, "\n")] = '\0';

        fscanf(f, "%f\n", &p2[i].price);
    }

    fclose(f);

    // 5. In ra kiểm tra
    printf("\n--- Du lieu doc tu file ---\n");
    for (int i = 0; i < m; i++) {
        printf("\nSan pham %d\n", i + 1);
        printf("Ten: %s\n", p2[i].name);
        printf("Gia: %.2f\n", p2[i].price);
    }

    // 6. So sánh
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (strcmp(p1[i].name, p2[i].name) != 0 || p1[i].price != p2[i].price) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("\nGhi va doc dung!\n");
    else
        printf("\nCo loi!\n");

    return 0;
}