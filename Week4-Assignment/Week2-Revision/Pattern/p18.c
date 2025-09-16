#include <stdio.h>

int main()
{
    int rows;

    printf("Enter Rows = ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        printf("*");
        for (int j = 0; j <= rows; j++)
        {
            if ((j == rows) || (j == i && j < rows / 2)
                    || (j == rows - i - 1 && j > rows / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}