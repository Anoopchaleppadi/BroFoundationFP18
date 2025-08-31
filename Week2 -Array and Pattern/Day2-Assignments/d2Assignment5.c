// Write a program to find the second largest element in an array. For example:
// Input:
// arr = {12, 35, 1, 10, 34, 1}
// Output:
// Second Largest = 34
#include <stdio.h>
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = 6, i;
    int first, second;

    first = second = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second Largest = %d\n", second);
    return 0;
}
