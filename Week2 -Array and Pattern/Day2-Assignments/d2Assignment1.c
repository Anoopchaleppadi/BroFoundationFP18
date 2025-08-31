
// Write a program to reverse the elements of a given array.
// For example: Input:
// arr = {1, 2, 3, 4, 5}
// Output: arr = {5, 4, 3, 2, 1}
#include <stdio.h>

int main() {
    int i, arr[]= {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=n-1;i>=0;i--) {
        printf("%d ",arr[i]);
    }
}