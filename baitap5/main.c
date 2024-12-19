#include <stdio.h>

int main() {
    int a[5][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{7, 9, 1, 2},{3, 4,5, 6},{2,5,6}};
    int sum = 0;
    printf("Ma tran da khai bao :\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <4; j++) {
            if (i == 0 || i == 5 - 1 || j == 0 || j == 4 - 1) {
                sum += a[i][j];
            }
        }
    }
    printf("Tong cac phan tu o duong bien : %d\n", sum);

    return 0;
}

