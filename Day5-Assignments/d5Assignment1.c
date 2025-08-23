//Debug and fix the following code snippet to find the sum of numbers from 1 to n:
#include <stdio.h>
int main() {
    int n, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n); // Fixed & missing
    for (i = 1; i <= n; i++) // removed semicolon
    sum += i; // Fix required here
    printf("Sum is %d", sum); // Fix required here
    return 0;
}

