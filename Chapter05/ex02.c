#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], index = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("Max = %d, Index = %d", max, index);
}