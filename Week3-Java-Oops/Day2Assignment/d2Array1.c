#include <stdio.h>

int main() {
    int arr[100], n, i, j;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }


    for (i = 0; i < n; i++) {
        if (arr[i] % 4 == 0) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    // Output result
    printf("\nFinal array (Reversed and without multiples of 4):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
