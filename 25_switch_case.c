#include <stdio.h>
int main()

/* 1 code */
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     if (x == 10)
//     {
//         printf("good\n");
//     }
//     else
//     {
//         if (x == 20)
//         {
//             printf("bad\n");
//         }
//         else
//         {
//             if (x == 30)
//             {
//                 printf("ugly\n");
//             }
//             else
//             {
//                 printf("invalid input\n");
//             }
//         }
//     }
//     return 0;
// }

/* 2 cose */
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     switch (x)
//     {
//     case 10:
//         printf("good\n");
//         break;

//     case 20:
//         printf("bad\n");
//         break;

//     case 30:
//         printf("ugly\n");
//         break;

//         default;
//         printf("invalid input\n");
//     }
//     return 0;
// }

/* 3 code */
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     switch (x)
//     {
//     case 20:
//         printf("good\n");
//         break;

//     case 30:
//         printf("bad\n");
//         break;

//     case 40:
//         printf("ugly\n");
//         break;
//     }
//     return 0;
// }

/* 4 code */
// {
//     int x;
//     printf("Ennter a number: ");
//     scanf("%d", &x);
//     switch (x)
//     {

//         default:
//         printf("invalid input\n");
//         break;
//     case 10:
//         printf("good\n");
//         break;

//     case 20:
//         printf("bad\n");
//         break;

//     case 30:
//         printf("ugly\n");
//         break;

//     }
//     return 0;
// }

/* 5 code */
// {

//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     switch (x)
//     {
//     case 10:
//     case 20:
//         printf("good\n");
//         break;

//     case 30:
//     case 40:
//         printf("bad\n");
//         break;

//     case 50:
//     case 60:
//         printf("ugly\n");
//         break;

//     default:
//         printf("Invalid input: ");
//         break;
//     }
//     return 0;
// }



  /* 6 code */
{
    char m;
    printf("Enter a numner: ");
    scanf("%c", &m);
    switch (m)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a vowel\n", m);
        break;
    default:
        printf("%c it is a constant\n ");
    }
    return 0;
}