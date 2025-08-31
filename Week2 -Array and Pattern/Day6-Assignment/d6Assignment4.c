// Write a program to find the sum of all prime numbers in an unsorted 1D array. For example:
// Input:
// arr[] = {6, 7, 13, 15, 17, 19}
// Output:
// Sum of prime numbers: 56
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
    int arr[] = {6, 7, 13, 15, 17, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i]))
            sum += arr[i];
    }

    printf("Sum of prime numbers: %d", sum);
    return 0;
}
