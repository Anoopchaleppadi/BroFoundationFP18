// Write a program to reverse a 1D array by shifting elements (without extra space). For example:
// Input:
// arr = {2, 6, 9, 7, 1}
// Output:
// arr = {1, 7, 9, 6, 2}
#include <stdio.h>

int main() {
    int arr[] = {2, 6, 9, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        temp = arr[n-1];
        for (j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
