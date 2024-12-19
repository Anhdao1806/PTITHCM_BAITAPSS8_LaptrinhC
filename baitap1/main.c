#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(a) / sizeof(a[0]);
    printf("Cac phan tu tu cuoi ve dau:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}

