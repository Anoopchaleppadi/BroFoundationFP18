// Sort the array, then display unique and duplicate elements separately.
#include <stdio.h>
int main() {
    int arr[] = {4,5,4,6,6,7,8};
    int n = 7, i, j, temp;

    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Unique: ");
    for(i=0;i<n;) {
        int count=1;
        while(i+count<n && arr[i]==arr[i+count]) count++;
        if(count==1) printf("%d ",arr[i]);
        i+=count;
    }

    printf("\nDuplicates: ");
    for(i=0;i<n;) {
        int count=1;
        while(i+count<n && arr[i]==arr[i+count]) count++;
        if(count>1) printf("%d ",arr[i]);
        i+=count;
    }
    return 0;
}
