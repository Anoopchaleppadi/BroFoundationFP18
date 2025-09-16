#include <stdio.h>
int main() {
    int arr[10]={4,7,9,1}, n=4, val=6;

    for(int i=0;i<n/2;i++) {
        int t=arr[i]; arr[i]=arr[n-1-i]; arr[n-1-i]=t;
    }

    int mid=n/2;
    for(int i=n;i>mid;i--) arr[i]=arr[i-1];
    arr[mid]=val; n++;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
