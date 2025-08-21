//Write a program that demonstrates the difference between pre-increment (++i) and post-increment (i++) with an example.
#include <stdio.h>
int main() {
    int a = 5, b = 5;

    printf("Pre-increment (++a): %d\n", ++a);
    printf("Post-increment (b++): %d\n", b++);
    printf("Value of b after post-increment: %d\n", b);

    return 0;
}
