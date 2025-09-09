#include <stdio.h>
int main() {
    int stars[] = {2, 1, 5, 2, 2, 8, 3, 3, 3, 11};
    int n = sizeof(stars) / sizeof(stars[0]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < stars[i]; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
