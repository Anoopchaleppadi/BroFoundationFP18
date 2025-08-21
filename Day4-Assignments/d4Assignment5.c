#include <stdio.h>
int main() {
    int i, j, s;
    int n = 4;

    for(i=1; i<=n; i++) {
        // left decreasing numbers
        for(j=1; j<=n-i+1; j++) {
            printf("%d ", j);
        }

        // spaces in the middle
        for(s=1; s<=2*(i-1); s++) {
            printf("* ");
        }

        // right decreasing numbers
        for(j=n-i+1; j>=1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}
