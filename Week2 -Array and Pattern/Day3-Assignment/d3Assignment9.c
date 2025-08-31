// Write a program to remove all duplicates from an array and display the unique elements.
#include <stdio.h>
int main() {
    int arr[] = {1,2,2,3,4,4,5};
    int n = 7, i, j;

    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j])
                arr[j]=-1;
        }
    }

    printf("Unique elements: ");
    for(i=0;i<n;i++) {
        if(arr[i]!=-1)
            printf("%d ",arr[i]);
    }
    return 0;
}
