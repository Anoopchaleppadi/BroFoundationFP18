#include <stdio.h>
int main() {
    int arr[] = {1,2,2,3,1,2}, n=6, maxFreq=0, elem;
    for(int i=0;i<n;i++) {
        int count=1;
        for(int j=i+1;j<n;j++) if(arr[i]==arr[j]) count++;
        if(count>maxFreq) { maxFreq=count; elem=arr[i]; }
    }
    printf("Highest freq element=%d (%d times)",elem,maxFreq);
}
