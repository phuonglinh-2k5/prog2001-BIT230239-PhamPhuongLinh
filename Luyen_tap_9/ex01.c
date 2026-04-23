#include <stdio.h>

int main() {
    FILE *f = fopen("C:\\cslt\\Luyen_tap_9\\bai1.txt", "w");

    if (f == NULL) {
        printf("Khong tao duoc file!\n");
        return 1;
    }

    fprintf(f, " bai 1\n");

    fclose(f);
    return 0;
}