//Write a C program to create an array of 5 integers and initialize it with values 1, 2, 3, 4, 5 and Print the array's values.
#include<stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    printf("The array elements are:\n");
    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
}
