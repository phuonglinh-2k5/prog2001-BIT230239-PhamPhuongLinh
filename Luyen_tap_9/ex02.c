#include <stdio.h>

int main() {
    FILE *f;
    char text[200];

    f = fopen("C:\\cslt\\Luyen_tap_9\\output.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    printf("Nhap text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(f, "%s", text);

    fclose(f);
    return 0;
}