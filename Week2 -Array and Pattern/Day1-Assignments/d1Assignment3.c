//Write a C program to find the sum of all elements in an array of 10 integers.
#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    printf("The sum of all elements in an array is:\n");
    for (int i = 0; i < 10; i++) {
        sum += arr[i];

    }
    printf("%d\n", sum);
}
