// How to merge two arrays without duplicates in C?
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 2};
    int arr2[] = {3, 4, 5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int merged[n1 + n2];
    int k = 0;


    for(int i = 0; i < n1; i++) {
        int exists = 0;
        for(int j = 0; j < k; j++) {
            if(merged[j] == arr1[i]) {
                exists = 1;
                break;
            }
        }
        if(!exists) merged[k++] = arr1[i];
    }


    for(int i = 0; i < n2; i++) {
        int exists = 0;
        for(int j = 0; j < k; j++) {
            if(merged[j] == arr2[i]) {
                exists = 1;
                break;
            }
        }
        if(!exists) merged[k++] = arr2[i];
    }

    printf("Merged Array without Duplicates: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
