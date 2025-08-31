
#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;
    int num = 9;

    for (i = 0; i < n; i++) {
        for (space = 0; space < i; space++) {
            printf("  ");
        }
        for (j = 1; j <= num; j++) {
            printf("%d ", j);
        }
        printf("\n");
        num -= 2;
    }

    return 0;
}
