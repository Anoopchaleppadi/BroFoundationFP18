// Write a program that takes an unsorted array of integers and deletes all the prime numbers from the array. For example:
// Input:
// arr[] = {10, 11, 14, 3, 9, 7, 15, 18}
// Output:
// Array after deletion: {10, 14, 9, 15, 18}
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[] = {10, 11, 14, 3, 9, 7, 15, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newArr[n]; // temporary array
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(!isPrime(arr[i])) {
            newArr[j] = arr[i];
            j++;
        }
    }

    printf("Array after deletion: {");
    for(int i = 0; i < j; i++) {
        printf("%d", newArr[i]);
        if(i < j-1) printf(", ");
    }
    printf("}");
    return 0;
}
