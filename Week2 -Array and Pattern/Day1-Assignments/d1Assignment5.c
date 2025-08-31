
//Write a program to insert an element at the end of an array.

#include <stdio.h>
int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 99;


    arr[n] = val;
    n++;
    printf("Arrray after inserting at beginnig: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}