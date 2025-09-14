// 5.Write a program to print the Fibonacci series up to n terms.
// Print the Fibonacci series up to n terms. The Fibonacci series starts with 0 and 1, and each subsequent term is the sum of the previous two.
// Input:
// Enter the number of terms: 5
// Output:
// Fibonacci Series: 0 1 1 2 3
//
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
