#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter the input: ");
    scanf("%d", &n);

    // Upper part
    for(row = n; row >= 1; row--)
    {
        // Print *
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }

        // Print spaces
        for(col = 1; col <= 2 * n - 2 * row; col++)
        {
            printf("  ");
        }

        // Print *
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }

        printf("\n");
    }

    // Lower part
    for(row = 1; row <= n; row++)
    {
        // Print *
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }

        // Print spaces
        for(col = 1; col <= 2 * n - 2 * row; col++)
        {
            printf("  ");
        }

        // Print *
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}