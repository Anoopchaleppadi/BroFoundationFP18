// Write a program to sort an array and count the number of unique elements. For example:
// Input:
// arr = {4, 5, 4, 6, 6, 7, 8}
// Output:
// Unique elements = 4, 5, 6, 7, 8 (count = 5)
#include <stdio.h>
int main() {
    int arr[] = {4, 5, 4, 6, 6, 7, 8};
    int n = 7, i, j, temp, count = 0;


    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Unique elements: ");
    for(i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i-1]) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nCount = %d\n", count);

    return 0;
}
