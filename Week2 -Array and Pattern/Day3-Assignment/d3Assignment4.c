// Display the frequency of each number in a sorted array.
#include <stdio.h>
int main() {
    int arr[] = {1,1,2,2,2,3,4,4};
    int n = 8, i, count;

    for(i = 0; i < n; ) {
        count = 1;
        while(i+count < n && arr[i] == arr[i+count]) {
            count++;
        }
        printf("%d occurs %d times\n", arr[i], count);
        i += count;
    }
    return 0;
}
