#include <stdio.h>
int main() {
    int arr[] = {0,1,2,2,0,3}, n=6;
    for(int i=0;i<n;i++) {
        if(arr[i]==0) continue;
        int count=0;
        for(int j=0;j<n;j++) if(arr[i]==arr[j]) count++;
        printf("%d occurs %d times\n",arr[i],count);
    }
}
