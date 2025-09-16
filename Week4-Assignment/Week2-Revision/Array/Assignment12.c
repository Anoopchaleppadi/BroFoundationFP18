#include <stdio.h>
int main() {
    int arr[] = {1,2,2,3,1}, n=5;
    for(int i=0;i<n;i++) {
        int count=1;
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) { count++; arr[j]=-1; }
        }
        if(arr[i]!=-1) printf("%d -> %d times\n",arr[i],count);
    }
}
