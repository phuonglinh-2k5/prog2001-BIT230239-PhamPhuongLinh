#include <stdio.h>

// Hàm không dùng static
void increment_nonstatic() {
    int counter = 0;
    counter++;
    printf("Counter (non-static): %d\n", counter);
}

// Hàm dùng static
void increment_static() {
    static int counter = 0;
    counter++;
    printf("Counter (static): %d\n", counter);
}

int main() {

    printf("Khong dung static \n");
    increment_nonstatic();
    increment_nonstatic();
    increment_nonstatic();

    printf("\n Dung static\n");
    increment_static();
    increment_static();
    increment_static();

    return 0;
}