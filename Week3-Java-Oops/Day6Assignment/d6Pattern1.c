#include <stdio.h>
int main() {
    int i, j, n = 9;
    int evenStars = 4;

    for(i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            printf("*\n");
        } else {
            for(j = 1; j <= evenStars; j++) {
                printf("* ");
            }
            printf("\n");
            evenStars++;
        }
    }

    return 0;
}
