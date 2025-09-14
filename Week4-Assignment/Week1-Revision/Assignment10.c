// 10.  Find Sum and Average of n Numbers: Calculate  Find Sum and Average of n Numbers.
// Calculate  Find Sum and Average of n Numbers.
// Input:
// Enter number of elements: 3
// Enter numbers: 10 20 30
// Output:
// Sum: 60
// Average: 20.00


#include <stdio.h>
int main() {
    int n, i, num, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    avg = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    return 0;
}
