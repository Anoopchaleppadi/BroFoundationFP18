// Write a program to sort an array in descending order. For example:
// Input:
// arr = {7, 1, 9, 3, 5}
// Output:
// arr = {9, 7, 5, 3, 1}
#include <stdio.h>
int main() {
    int i,j,temp, arr[]={7,1,9,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(arr[j] < arr[j+1]){
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