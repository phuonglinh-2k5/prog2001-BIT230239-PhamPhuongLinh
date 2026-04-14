#include <stdio.h>

int main () {
    int a;

    printf ("Nhap so nguyen: ");
    scanf ("%d", &a);

    float b = (float)a;
    int c = (int)b;

    printf("So thuc: %.2f\n", b);
    printf("Ep nguoc lai so nguyen: %d\n", c);

    return 0;
}
