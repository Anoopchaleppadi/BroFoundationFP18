#include <stdio.h>

int main() {
    int n = 6;
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i >= j)
                printf("%d ", i);
            else
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
