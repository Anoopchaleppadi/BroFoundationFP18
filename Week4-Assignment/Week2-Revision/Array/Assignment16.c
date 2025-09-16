//
// Created by ASUS on 16-09-2025.
//
#include <stdio.h>
int main() {
    int arr[] = {10,11,12,13,14,15,17,18,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, count = 0, isPrime;

    printf("Prime numbers: ");
    for (i = 0; i < n; i++) {
        if (arr[i] <= 1) continue;
        isPrime = 1;
        for (j = 2; j <= arr[i]/2; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nTotal primes = %d", count);
    return 0;
}
