#include <stdio.h>

int main() {
    int a[3][3] = {{12,10,34},{50,80,78},{45,67,89}};
    int sum = 0;
    printf("Ma tran da khai bao :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Cac phan tu tren duong cheo chinh : ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf ("\n");
    printf("Tong cac phan tu tren duong cheo chinh: %d", sum);
    printf ("\n");

    return 0;
}

