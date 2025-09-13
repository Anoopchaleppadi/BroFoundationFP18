#include <stdio.h>
int main() {
    int i, j, k, n = 14;

    for(i = 1; i <= n; i++) {
        if(i % 2 == 1) {

            printf("*\n");
        } else {

            for(j = 1; j <= i / 2; j++) {
                printf("***\n");
            }
        }
    }

    return 0;
}
