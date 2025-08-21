//Write a program that prints numbers from 1 to 100, but stops printing when it reaches 50.
#include <stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i == 50) {
            break;
        }
        printf("%d\n", i);
    }
}