#include <stdio.h>
int main() {
    int arr[] = {1,2,2,3,4,4,5}, n=7, unique=0, dup=0;
    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) if(arr[i]==arr[j]) count++;
        if(count==1) unique++;
        else if(count>1) dup++;
    }
    printf("Unique=%d Duplicates=%d", unique, dup/2);
}
