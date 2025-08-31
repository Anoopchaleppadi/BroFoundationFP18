// Count the frequency of only odd numbers in the array.
#include <stdio.h>
int main() {
    int arr[] = {1,2,3,3,4,5,5,5};
    int n = 8, i, j, count, visited[n];

    for(i = 0; i < n; i++) visited[i] = 0;

    for(i = 0; i < n; i++) {
        if(visited[i]) continue;
        if(arr[i] % 2 != 0) {
            count = 1;
            for(j = i+1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("Odd %d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}
