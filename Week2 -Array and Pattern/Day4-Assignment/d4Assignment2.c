// Write a program to reverse a 1D array using a while loop without using extra arrays. For example:
// Input:
// arr = {5, 8, 12, 3}
// Output:
// arr = {3, 12, 8, 5}
#include <stdio.h>

int main() {
    int arr[] = {5, 8, 12, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = n-1, temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
