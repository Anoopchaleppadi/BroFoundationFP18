// 1.Write a program to print numbers from 1 to n.
// Print all numbers from 1 to n, where n is a positive integer entered by the user.
// Input:
// Enter a number: 5
// Output:
// 1 2 3 4 5

#include <stdio.h>
int main() {
    int n, i, sum;
    printf("Enter a positive integer: ");
    scanf("%d" ,&n);
    printf("Positive Integers: ");
    for (i = 1; i <= n; i++) {
        printf("%d ",i);
    }

}

