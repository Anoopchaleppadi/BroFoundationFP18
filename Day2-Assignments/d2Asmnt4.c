//Write a program to check if a given year is a leap year or not.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("The year is a leap year.\n");
    }
    else {
        printf("The year is not a leap year.\n");
    }
}
