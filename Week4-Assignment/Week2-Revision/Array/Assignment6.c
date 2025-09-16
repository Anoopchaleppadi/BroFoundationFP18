#include <stdio.h>
int main() {
    int arr[] = {1,2,4,5,6}, n=5, sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    int total = (6*(6+1))/2;
    printf("Missing = %d", total-sum);
}
