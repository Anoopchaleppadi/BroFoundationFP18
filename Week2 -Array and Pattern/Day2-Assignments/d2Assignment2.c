// Write a program to sort an array in ascending order without using built-in sort functions. For example:
// Input:
// arr = {5, 3, 1, 4, 2}
// Output:
// arr = {1, 2, 3, 4, 5}
#include <stdio.h>
int main() {
    int i,j,temp, arr[]={5,3,1,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                // swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}