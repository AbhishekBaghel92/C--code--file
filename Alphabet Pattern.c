#include <stdio.h>
int main()
// {
//     int num;
//     printf("Enter the num: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= 5; i++)
//     {
//         char name = 'a' + i- 1;

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c ", name);
//         }

//         printf("\n");
//     }

//     return 0;
// }

{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);

    for (int i = 1; i <= 5; i++)
    {

        for (char j = 'a'; j <= 'e'; j++)
        {
            printf("%c ", j);
        }

        printf("\n");
    }

    return 0;
}