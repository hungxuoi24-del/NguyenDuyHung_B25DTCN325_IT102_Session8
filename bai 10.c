#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So phan tu khong hop le.\n");
        return 0;
    }
    int i, d;
    int arr[n];
    for (i = 0; i < n; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMang sau khi nhap la : ");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Cac so nguyen to trong mang la : ");
    int anyPrime = 0;
    for (i = 0; i < n; ++i) {
        int x = arr[i];
        if (x <= 1) continue;            
        int isPrime = 1;                
        for (d = 2; d * d <= x; ++d) {
            if (x % d == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", x);
            anyPrime = 1;
        }
    }
    if (!anyPrime) printf("Khong co");
    printf("\n");

    return 0;
}

