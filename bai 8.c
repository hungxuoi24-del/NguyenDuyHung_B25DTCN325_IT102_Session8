#include <stdio.h>

int main() {
    int hang, cot;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &hang);

    printf("Nhap so cot cua mang: ");
    scanf("%d", &cot);

    int arr[hang][cot];  
    int i, j;
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("Nhap phan tu o hang %d, cot %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang 2 chieu vua nhap la:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("%4d", arr[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}

