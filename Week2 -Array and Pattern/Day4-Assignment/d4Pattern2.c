#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2*n-1; j++) {
            if (j == i || j == 2*n - i)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }

    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= 2*n-1; j++) {
            if (j == i || j == 2*n - i)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
