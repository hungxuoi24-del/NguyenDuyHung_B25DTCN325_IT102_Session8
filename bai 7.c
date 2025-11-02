#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    for (i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d (so le): ", i);
            scanf("%d", &arr[i]);

            if (arr[i] % 2 == 0)
                printf("So vua nhap la so chan! Vui long nhap lai.\n");

        } while (arr[i] % 2 == 0);
    }

    printf("\nCac phan tu le trong mang la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

