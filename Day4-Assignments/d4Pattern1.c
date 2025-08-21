#include <stdio.h>
int main() {
    int i,j;
    int n=10;
    for(i=n;i>=1;i--) {
        if(i%2==0)continue;
        for(j=1;j<=i;j++) {
            if (j%2!=0)
            printf("%d ",j);
        }
        printf("\n");
    }
}