// Replace all duplicate numbers in the array with -1 and print the modified array.
#include <stdio.h>
int main() {
    int arr[] = {1,2,2,3,4,4};
    int n = 6, i, j;

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j])
                arr[j] = -1;
        }
    }

    printf("Modified array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
