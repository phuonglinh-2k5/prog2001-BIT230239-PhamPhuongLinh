#include <stdio.h>

int main() {
    FILE *f;
    int x = 12345;
    int y;

    // 1. Tạo file và ghi 30 ký tự trắng trước
    f = fopen("data.txt", "w+");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    for (int i = 0; i < 30; i++) {
        fputc(' ', f); // lấp file bằng khoảng trắng
    }

    // 2. Di chuyển đến vị trí 20
    fseek(f, 20, SEEK_SET);

    // 3. Ghi số nguyên (dạng text)
    fprintf(f, "%d", x);

    // 4. Quay lại vị trí 20 để đọc
    fseek(f, 20, SEEK_SET);
    fscanf(f, "%d", &y);

    // 5. Kiểm tra
    printf("Gia tri ghi: %d\n", x);
    printf("Gia tri doc: %d\n", y);

    if (x == y)
        printf("Ghi va doc dung!\n");
    else
        printf("Co loi!\n");

    // 6. Vị trí con trỏ sau khi đọc
    long pos = ftell(f);
    printf("Vi tri con tro sau khi doc: %ld\n", pos);

    fclose(f);
    return 0;
}