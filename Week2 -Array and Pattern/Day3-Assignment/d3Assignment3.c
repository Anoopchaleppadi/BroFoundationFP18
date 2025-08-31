// Identify and print all the duplicate elements in an array (elements that appear more than once).
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7, i, j, count, visited[n];

    for(i = 0; i < n; i++) visited[i] = 0;

    printf("Duplicate elements: ");
    for(i = 0; i < n; i++) {
        if(visited[i]) continue;
        count = 1;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        if(count > 1)
            printf("%d ", arr[i]);
    }
    return 0;
}
