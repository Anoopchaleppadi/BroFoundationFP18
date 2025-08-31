#include <stdio.h>
int main() {
    int i,j,s;
    int n=5;
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            printf("* ");
        }
        for (s=1;s<=n-i;s++) {
            printf("    ");
        }
        for (j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}