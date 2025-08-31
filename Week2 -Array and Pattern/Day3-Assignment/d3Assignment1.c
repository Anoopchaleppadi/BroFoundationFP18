// Write a program to count the frequency of each element in an array.
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4};
    int n = 7;
    int i, j, count;
    int visited[n];

    for(i = 0; i < n; i++) visited[i] = 0;

    for(i = 0; i < n; i++) {
        if(visited[i]) continue;
        count = 1;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
