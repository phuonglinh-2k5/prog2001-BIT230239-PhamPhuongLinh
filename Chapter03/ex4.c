#include <stdio.h>

int main() {

    int x = 50; // outer block

    {
        // inner block
        printf("Gia tri x trong inner block: %d\n", x);
    }

    return 0;
}