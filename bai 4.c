#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // thêm d?u cách
    }

    return 0;
}

