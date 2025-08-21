//Write a program with a function to check if a number is even or odd.
#include <stdio.h>
int evenOrOdd(int num1) {
    if(num1 % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
}
int main() {
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    evenOrOdd(num1);
}