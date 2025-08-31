// Write a program to find all prime numbers in an unsorted 1D array. For example:
// Input:
// arr[] = {5, 8, 13, 9, 4, 17}
// Output:
// Prime numbers are: 5, 13, 17
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
    int arr[] = {5, 8, 13, 9, 4, 17};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Prime numbers are: ");
    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
    return 0;
}
