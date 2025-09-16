#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5}, n=5, k=2, res[5];
    for(int i=0; i<n; i++) res[(i+k)%n]=arr[i];
    for(int i=0; i<n; i++) printf("%d ",res[i]);
}
