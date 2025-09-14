// 8. Find Power of a Number: Calculate a raised to the power b .
// Calculate a raised to the power b  (e.g. 2  power 3 = 2*2*2 = 8).
// Input:
// Enter base and exponent: 2 3
// Output:
// Result: 8
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
