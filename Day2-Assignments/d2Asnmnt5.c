//Write a program to display the day of the week based on a number input (1 for Monday, 2 for Tuesday, etc.) using switch.
#include <stdio.h>
int main() {
    int dayNumber;
    printf("Enter the number between(0-7):\n");
    scanf("%d", &dayNumber);
    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
            case 2:
            printf("Tuesday\n");
            break;
            case 3:
            printf("Wednesday\n");
            break;
            case 4:
            printf("Thursday\n");
            break;
            case 5:
            printf("Friday\n");
            break;
            case 6:
            printf("Saturday\n");
            case 7:
            printf("Sunday\n");
            break;
            default:
            printf("Enter a valid day number.\n");

    }

}
