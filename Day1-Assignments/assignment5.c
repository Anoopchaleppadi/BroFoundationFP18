//-Write a program to input three numbers and display their average.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2, num3;
    float avgOfThree;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    avgOfThree = (num1 + num2 + num3)/3;
    printf("The average of three numbers is %f", avgOfThree);
}