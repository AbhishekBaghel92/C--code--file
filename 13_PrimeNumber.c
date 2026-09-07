#include <stdio.h>

int main()

// * prime number *
// {
//     int x, y, z;

//     printf("Enter the input number: ");
//     scanf("%d", &x);

//     if (x > 1)
//     {
//         z = 0;
//         y = 2;

//         while (y <= x - 1)
//         {
//             printf("Dividing %d by %d\n", x, y);

//             if (x % y == 0)
//             {
//                 z++;
//             }

//             y++;   // Important
//         }

//         if (z == 0)
//         {
//             printf("%d is a prime number\n", x);
//         }
//         else
//         {
//             printf("%d is not a prime number\n", x);
//         }
//     }

//     return 0;
// }4

// *  range of prime number 
{
    int x, y, z, ep, sp, j, temp;

    printf("Enter Starting point: ");
    scanf("%d", &sp);

    printf("Enter ending point: ");
    scanf("%d", &ep);

    // Swap if starting point is greater
    if (sp > ep)
    {
        temp = sp;
        sp = ep;
        ep = temp;
    }

    j = sp;

    while (j <= ep)
    {
        x = j;

        if (x > 1)
        {
            z = 0;
            y = 2;

            while (y <= x - 1)
            {
                if (x % y == 0)
                {
                    z = 1;
                    break;
                }

                y++;
            }

            if (z == 0)
            {
                printf("%d\n", x);
            }
        }

        j++;
    }

    return 0;
}