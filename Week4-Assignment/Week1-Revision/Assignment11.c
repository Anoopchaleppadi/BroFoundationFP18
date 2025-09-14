// 11.  Print the Square of Numbers from 1 to n: Calculate  Find Sum and Average of n Numbers.
// Calculate  square values from 1 to n.
// Input:
// Enter a number: 4
// Output:
// Result: 1 4 9 16
//
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Result: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i*i);
    }
    return 0;
}
