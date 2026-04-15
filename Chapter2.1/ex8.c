#include <stdio.h>
#include <math.h>

int main() {
    const double pi = 3.14159265358979323846;
    double x;

    x = pi / 2;

    printf("sin(x) = %lf\n", sin(x));
    printf("cos(x) = %lf\n", cos(x));
    printf("tan(x) = %lf\n", tan(x));

    return 0;
}