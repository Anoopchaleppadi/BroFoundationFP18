#include <stdio.h>
int main(void) {
    int i, j,s;
    int n=5;
    for(i=1; i<=n; i++) {
        for (s=1; s<=n-i; s++) {
            printf("  ");
        }
        for(j=0; j<2*i-1; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}