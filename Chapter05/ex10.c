#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for(int i = 0; i < n/2; i++) {
        char temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }

    printf("%s", str);
}