#include <stdio.h>
int main() {
    int i,j;
    int n=5;
    for(i=1;i<=n;i++) {

        for (j=1;j<=n;j++) {
            if (i==1 ||  i==n/2+1||j==1 ) printf("* ");
            else printf(" ");
        }

        printf("\n");
    }
}