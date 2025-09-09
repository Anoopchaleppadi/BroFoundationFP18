#include <stdio.h>

int main() {
    int arr[100], n, i, j, k, sum = 0, count = 0;
    int unique[100], uniqueCount = 0;
    int isDuplicate;


    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        isDuplicate = 0;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount++] = arr[i];
        }
    }


    for (i = 0; i < uniqueCount; i++) {
        sum += unique[i];
    }


    double avg = (uniqueCount > 0) ? (double)sum / uniqueCount : 0;


    printf("\nUnique elements are: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    printf("\nAverage of unique elements = %.2f\n", avg);

    return 0;
}
