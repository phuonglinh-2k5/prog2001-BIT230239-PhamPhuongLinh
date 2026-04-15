#include <stdio.h>

int main () {
    int x = 10;
    {
        int x = 20;
        printf("x trong block = %d\n", x);
    }
    printf("x ngoai block = %d\n", x);
}