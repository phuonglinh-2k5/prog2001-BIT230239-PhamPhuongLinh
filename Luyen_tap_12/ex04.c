#include <stdio.h>


int Min(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = Min(arr, n);

    printf("Gia tri nho nhat = %d", min);

    return 0;
}