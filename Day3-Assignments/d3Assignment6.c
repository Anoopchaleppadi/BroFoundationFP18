//Write a program that prints numbers from 1 to 20 but skips multiples of 5.
#include <stdio.h>
int main() {
    int i;
    for(i = 1; i <= 20; i++) {
        if(i % 5 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
