// 4.Write a program to reverse a number.
// Reverse the digits of a number entered by the user.
// Input:
// Enter a number: 1234
// Output:
// Reversed number: 4321
//
#include <stdio.h>
int main() {
    int num, temp, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", rev);

    return 0;
}
