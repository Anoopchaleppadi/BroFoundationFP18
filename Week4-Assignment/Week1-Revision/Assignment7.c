// 7.Factorial of a Number: Write a program to find the factorial of a number.
// Calculate the factorial of a number n (e.g., 5! = 5 * 4 * 3 * 2 * 1 = 120).
// Input:
// Enter a number: 5
// Output:
// Factorial: 120
//
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}
