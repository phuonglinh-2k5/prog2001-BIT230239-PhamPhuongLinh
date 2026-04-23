#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char c;
    int count = 0;

    fin = fopen("C:\\cslt\\Luyen_tap_9\\output.txt", "r");
    fout = fopen("C:\\cslt\\Luyen_tap_9\\result_char.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Loi file!\n");
        return 1;
    }

    while ((c = fgetc(fin)) != EOF) {
        if (isalpha(c)) count++;
    }

    fprintf(fout, "So chu cai: %d\n", count);

    fclose(fin);
    fclose(fout);
    return 0;
}