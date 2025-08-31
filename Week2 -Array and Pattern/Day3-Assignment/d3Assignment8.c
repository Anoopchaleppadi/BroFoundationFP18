// Write a program to check if all elements in an array are unique.
#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5, i, j, flag = 1;

    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                flag=0;
                break;
            }
        }
        if(flag==0) break;
    }

    if(flag) printf("All elements are unique\n");
    else printf("Array has duplicates\n");
    return 0;
}
