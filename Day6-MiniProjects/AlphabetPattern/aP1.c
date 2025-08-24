#include <stdio.h>
int main() {
    int i,j;
    int n=5;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(j==1|| j==n || (i<=3 && (i==j || i+j==n+1))) {
                printf("%c ",64+j);
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }
}