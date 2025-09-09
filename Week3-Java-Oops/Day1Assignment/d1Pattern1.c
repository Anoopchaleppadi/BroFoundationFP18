#include <stdio.h>

int main() {
    int blocks = 4; // change this to extend the pattern
    for (int b = 1; b <= blocks; b++) {
        printf("* \n");
        for (int k = 1; k <= b; k++) {
            printf("* * * \n");
        }
    }
    return 0;
}
