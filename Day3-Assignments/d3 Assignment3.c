//Write a program using a do-while loop to take user input until they enter a negative number.

#include <stdio.h>
int main() {
    int num;
    do {
        printf("Please enter a number (negative nbr to stop):\n");
        scanf("%d", &num);

    }
    while (num >=0);
        printf("Loop ended coz you entered a negative number");
    return 0;
}