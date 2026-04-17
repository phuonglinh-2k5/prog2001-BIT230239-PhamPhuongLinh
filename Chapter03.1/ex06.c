#include <stdio.h>

int main() {
    int i = 1;

    do {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("So can tim: %d", i);
            break;
        }
        i++;
    } while (1);

    return 0;
}