#include <stdio.h>

int main() {
    int m, n, a[100][100];
    printf("Nhap so hang va so cot: ");
    scanf("%d%d", &m, &n);

    int i;
    for (i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

   
    printf("Cac phan tu tren duong bien:\n");
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                printf("%4d", a[i][j]);
            else
                printf("    ");
        printf("\n");
    }
    return 0;
}

