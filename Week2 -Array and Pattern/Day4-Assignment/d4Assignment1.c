// Write a program to reverse a given 1D array in-place (without using any extra arrays). For example:
// Input:
// arr = {1, 2, 3, 4, 5}
// Output:
// arr = {5, 4, 3, 2, 1}
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, temp;

    for (i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
