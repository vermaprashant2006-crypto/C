#include <stdio.h>
    int main() {
    int i, j, k;
    for (i = 1; i <= 9; i += 3) {
        for (j = 1; j <= 10; j++) {
            for (k = i; k < i + 3; k++) {
                printf("%d*%d=%2d\t", k, j, k * j);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}