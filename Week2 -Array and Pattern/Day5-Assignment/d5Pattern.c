#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int num = 1;
    char ch = 'A';

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (j = 1; j <= i; j++) {
                printf("%c", ch);
            }
            ch++;
        } else {
            for (j = 1; j <= i; j++) {
                printf("%d", num);
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}
