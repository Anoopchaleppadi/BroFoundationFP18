#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int n, i, evenCount = 0, oddCount = 0;


    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }


    printf("\nEven elements:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }


    printf("\nOdd elements:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
