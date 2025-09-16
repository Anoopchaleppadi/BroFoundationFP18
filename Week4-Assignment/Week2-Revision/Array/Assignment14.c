#include <stdio.h>
int main() {
    int arr[]={8,4,7,2}, n=4;
    for(int i=0;i<n/2;i++) {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
