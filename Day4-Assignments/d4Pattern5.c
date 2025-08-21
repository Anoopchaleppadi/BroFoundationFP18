#include <stdio.h>
int main() {
    int i,j;
    int n=4;
    int k=50;
    for(i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            printf("%d ",k);
            k=k-5;
        }
        printf("\n");
    }
}