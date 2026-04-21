#include <stdio.h>

// Hàm tính tổng
int sumArray(int arr[], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int n, arr[100];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    // nhập mảng
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, n);

    printf("Tong = %d", result);

    return 0;
}