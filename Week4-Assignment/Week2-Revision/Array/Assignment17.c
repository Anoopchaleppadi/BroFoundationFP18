#include <stdio.h>
int main() {
    int arr[]={32,4,71,9,55,13,19,72}, n=8;
    int min=arr[0], max=arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    printf("Min=%d Max=%d",min,max);
}
