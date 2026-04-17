#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    t = time(NULL);

    printf("Time (seconds since 2025   ): %ld\n", t);

    return 0;
}