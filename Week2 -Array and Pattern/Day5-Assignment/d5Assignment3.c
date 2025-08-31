// Write a C program to merge two unsorted arrays and then sort the result
#include <stdio.h>

int main() {
    int arr1[] = {5, 1, 3};
    int arr2[] = {6, 2, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int merged[n1 + n2];

    for(int i = 0; i < n1; i++) merged[i] = arr1[i];
    for(int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];

    for(int i = 0; i < n1+n2-1; i++) {
        for(int j = 0; j < n1+n2-i-1; j++) {
            if(merged[j] > merged[j+1]) {
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }

    printf("Merged and Sorted Array: ");
    for(int i = 0; i < n1+n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
