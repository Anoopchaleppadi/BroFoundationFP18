#include <stdio.h>
int main() {
    for (int i=5; i>=1 ; i--) {
        // for (int s=1 ; s<=5-i ; s++) {
        //     printf(" ");
        // }
        for (int j=1; j<=i; j++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}