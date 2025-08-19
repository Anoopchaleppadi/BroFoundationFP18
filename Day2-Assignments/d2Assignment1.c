//Write a program to find the largest of three numbers using if-else statements.
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter Three Numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3) {
        printf("Num1 is greater that num2 and num3 %d\n",num1);

    }else if(num2 > num3 && num2 > num1) {
        printf("Num2 is greater that num3 and num4 %d\n",num2);
    }
    else {
        printf("Num3 is greater that num1 and num2 %d\n",num3);
    }
}