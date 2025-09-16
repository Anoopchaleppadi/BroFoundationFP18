#include <stdio.h>
int main() {
    int arr[] = {3,6,9,3,6,12}, n=6, k=3, cnt=0;
    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) if(arr[i]==arr[j]) count++;
        if(count>1 && arr[i]%k==0) { cnt++; }
    }
    printf("Count=%d", cnt/2);
}
