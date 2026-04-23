#include <stdio.h>

int main() {
    FILE *f;
    char line[200];

    f = fopen("C:\\cslt\\Luyen_tap_9\\output.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }

    fclose(f);
    return 0;
}