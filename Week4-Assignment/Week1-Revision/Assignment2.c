// 2.Write a program to find the sum of digits of a number.
// Calculate the sum of all digits of a number entered by the user.
// Input:
// Enter a number: 1234
// Output:
// Sum of digits: 10



#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);


    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }


    printf("Sum of digits: %d\n", sum);

    return 0;
}


