//-Write a program to input two numbers and calculate their sum.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2, sum;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is %d", num1, num2, sum);

}
