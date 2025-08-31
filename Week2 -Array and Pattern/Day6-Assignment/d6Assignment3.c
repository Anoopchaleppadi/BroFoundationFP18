// Write a program to find the lowest number in an unsorted 1D array. For example:
// Input:
// arr[] = {12, 9, 15, 5, 2, 19, 1}
// Output:
// Lowest number is: 1
#include <stdio.h>

int main() {
    int arr[] = {12, 9, 15, 5, 2, 19, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Lowest number is: %d", min);
    return 0;
}
