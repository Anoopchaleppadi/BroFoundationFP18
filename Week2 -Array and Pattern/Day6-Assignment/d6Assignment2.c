// Write a program to find the largest number in an unsorted 1D array. For example:
// Input:
// arr[] = {12, 9, 15, 5, 2, 19, 1}
// Output:
// Largest number is: 19
#include <stdio.h>

int main() {
    int arr[] = {12, 9, 15, 5, 2, 19, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest number is: %d", max);
    return 0;
}
