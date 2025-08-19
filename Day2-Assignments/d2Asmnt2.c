//Write a program to classify a student's grade based on marks:
//90-100: A 80-89: B 70-79: C 60-69: D <60: Fail
#include <stdio.h>
int main() {
    int mark;
    printf("Enter your mark's between (0-100):\n");
    scanf("%d", &mark);
    if (mark >= 90 && mark <= 100 ) {
        printf("Grade: A\n");
    }
    else if (mark >=80 && mark <= 89) {
        printf("Grade: B\n");
    }
    else if (mark >=70 && mark <= 79) {
        printf("Grade: C\n");
    }
    else if (mark >=60 && mark <= 69) {
        printf("Grade: D\n");
    }
    else if (mark <60 && mark >=0) {
        printf("You are Fail:\n");
    }
    else {
        printf("Invail Input Enter Between (0-100):\n");
    }
}


