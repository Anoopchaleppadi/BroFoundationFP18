#include <stdio.h>
int main() {
    int i,j;
    int n=5;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            if(j%2!=0) {
                printf("%c ",64+i);
            }
            else {
                printf("%d ",i);
            }

        }
        printf("\n");
    }
}