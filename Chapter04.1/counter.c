#include <stdio.h>
#include "counter.h"

void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}