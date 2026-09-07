#include <stdio.h>

int main()
{
    int n;
    printf("enter the *N*  number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - 1; j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - 1; j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}