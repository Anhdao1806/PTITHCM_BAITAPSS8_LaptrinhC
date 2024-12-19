#include <stdio.h>

int main() {
    int array[3][3] = {{23,80,98},{1,11,2008},{34,56,656}};
    int max = array[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ;j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);

    return 0;
}

