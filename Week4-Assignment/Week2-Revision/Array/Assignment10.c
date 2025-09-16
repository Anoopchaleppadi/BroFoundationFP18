#include <stdio.h>
int main() {
    int arr[] = {4, -2, 7, 4, -2, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, count;

    printf("Unique elements: ");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
