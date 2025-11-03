
#include <stdio.h>

int main() {
    int m, n, a[100][100];
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);

    int i, j;
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCac phan tu tren duong bien:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                printf("%4d", a[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }

    return 0;
}
