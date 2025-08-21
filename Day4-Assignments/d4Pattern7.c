#include <stdio.h>
int main() {
    int i,j;
    int n=7;
    for(i=1;i<=n;i++) {

        for (j=1;j<=3;j++) {
            if (j==1||  (i==2&&(j==2||j==3))||(i==n&&(j==2||j==3))) printf("* ");
            else printf(" ");
        }

        printf("\n");
    }
}