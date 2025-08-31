#include <stdio.h>
int main() {
    int i,j;
    int n=5;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(j==1 || i==j|| i==n) {
                printf("%d ",j);
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }
}