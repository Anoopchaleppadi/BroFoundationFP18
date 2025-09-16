#include <stdio.h>
int main() {
    int arr[] = {0,1,9,8,4,0,2,7,0}, n=9;
    int res[9], k=0;
    for(int i=0;i<n;i++) if(arr[i]!=0) res[k++]=arr[i];
    while(k<n) res[k++]=0;
    for(int i=0;i<n;i++) printf("%d ",res[i]);
}
