#include <stdio.h>

int main() {
    int arr[100], n, i, j;


    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;   /
            i--;
        }
    }


    printf("Array after deleting multiples of 3:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
