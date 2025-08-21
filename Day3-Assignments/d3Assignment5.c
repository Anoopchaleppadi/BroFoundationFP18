//Write a program to display a multiplication table (1 to 5) using nested loops.

#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 10; j++) {
            printf("%c ",64+1);
        }
        printf("\n");
    }
    return 0;
}
