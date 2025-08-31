#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=n-i;j++)
        {
            if(j==1|| j==n-i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}