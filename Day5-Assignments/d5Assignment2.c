//Debug the following code snippet that aims to print a multiplication table:
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d" ,&num); // Fix required here
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i); // Check this line
    }
    return 0;
}
