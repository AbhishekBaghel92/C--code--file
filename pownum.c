#include <stdio.h>

int main()
{
    int n, pow, num;

    printf("enter the n number: ");
    scanf("%d", &n);

    printf("enter the pow number: ");
    scanf("%d", &pow);

    num = n;

    for (int i = 1; i < pow; i++)
    {
        num = num * n;
    }

    printf("%d", num);

    return 0;
}