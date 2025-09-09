#include <stdio.h>
int main() {
    int i, j, k, n = 14; // total rows

    for(i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            // Odd row: single *
            printf("*\n");
        } else {
            // Even row: (i/2) times "***"
            for(j = 1; j <= i / 2; j++) {
                printf("***\n");
            }
        }
    }

    return 0;
}
