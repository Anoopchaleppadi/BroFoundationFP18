// 9.  Sum of All Even Digits of a Number: Calculate  sum of all even digits of a Number.
// Calculate  sum of all even digits of a Number.
// Input:
// Enter the Number : 1234
// Output:
// Sum of even digits: 6
//
#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) sum += digit;
        num /= 10;
    }
    printf("Sum of even digits: %d\n", sum);
    return 0;
}
