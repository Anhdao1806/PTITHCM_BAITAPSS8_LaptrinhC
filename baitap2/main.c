#include <stdio.h>

int main() {
    int a[5] = {24,435,436,346,645};
    int n,flag=0;
    printf("Nhap vao phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++) {
        if (a[i] == n) {
            printf("Vi tri phan tu trong mang %d\n", i);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("Phan tu khong ton tai.\n");
    }

    return 0;
}

