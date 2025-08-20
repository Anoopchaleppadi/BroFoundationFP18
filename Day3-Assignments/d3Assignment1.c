//Using for loop to print table of a number
#include <stdio.h>
#include <stdlib.h>
int main() {
    int number, i, a;
    printf("Enter a number:");
    scanf("%d", &number);
    for (i=1; i<=10; i++) {
        a = number*i;
        printf("%d\n", a );
    }
    getch();
}
