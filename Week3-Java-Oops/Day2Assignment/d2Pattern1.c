#include <stdio.h>
int main() {
    int i, j, n = 6;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(j % 2 == 0)
                printf("* ");
            else
                printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
