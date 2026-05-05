#include <stdio.h>

int main() {
    int i, j;

    for (i = 2; i <= 9; i++) {
        printf("=== Bang cuu chuong %d ===\n", i);

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int i = 2;

    while (i <= 9) {
        int j = 1;
        printf("=== Bang cuu chuong %d ===\n", i);

        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}*/