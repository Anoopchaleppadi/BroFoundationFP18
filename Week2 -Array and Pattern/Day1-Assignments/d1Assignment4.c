//Write a program to insert an element at the beginning of an array.

#include <stdio.h>
int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 99;

    for (int i=n ;i>0;i--) {
        arr[i] = arr[i-1];
    }
     arr[0] = val;
        n++;
    printf("Arrray after inserting at beginnig: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}