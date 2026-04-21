#include <stdio.h>
#include "math_utils.h"
#include "callback.h"
#include "counter.h"

int main() {
    // factorial & fib
    printf("5! = %d\n", factorial(5));
    printf("fib(6) = %d\n", fib(6));

    // callback
    printf("Add: %d\n", calculate(5, 3, add));
    printf("Sub: %d\n", calculate(5, 3, sub));

    // counter
    counter();
    counter();
    counter();

    return 0;
}