#include <stdio.h>

int main() {
    int arr[100], n, i, j, k, count;


    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            for (k = i; k < n - 1; k++) {
                arr[k] = arr[k + 1];
            }
            n--;
            i--;
        }
    }


    printf("\nArray after deleting unique elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
