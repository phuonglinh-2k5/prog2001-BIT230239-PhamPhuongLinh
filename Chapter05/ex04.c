#include <stdio.h>

int main() {
    int n, arr[100], x;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Nhap x: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Vi tri = %d", i);
            return 0;
        }
    }

    printf("Khong tim thay");
}