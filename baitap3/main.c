#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    int matrix[n][n];
    int m = 1;
       for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
               matrix[i][j] = m++;
            }
        }
    printf("Ma tran :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

