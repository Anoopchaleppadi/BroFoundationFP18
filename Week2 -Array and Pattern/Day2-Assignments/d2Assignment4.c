// Write a program to merge two sorted arrays into a single sorted array. For example:
// Input:
// arr1 = {1, 3, 5}, arr2 = {2, 4, 6}
// Output:
// arr = {1, 2, 3, 4, 5, 6}

#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = 3, n2 = 3;
    int arr3[n1+n2];
    int i=0, j=0, k=0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }


    while(i < n1) arr3[k++] = arr1[i++];
    while(j < n2) arr3[k++] = arr2[j++];

    printf("Merged array: ");
    for(i = 0; i < n1+n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}
