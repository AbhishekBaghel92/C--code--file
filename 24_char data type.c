#include <stdio.h>
int main()
/* 1 code */
// {
//     int m;
//     m = 'A';
//     printf("%d\n", m);
//     printf("%c\n", m);
//     return 0;
// }

/* 2 code */
// {
//     char m;
//     m = 48;
//     while (m <= 57)
//     {
//         printf("code%d, character%c\n", m, m);
//         m++;
//     }
//     m = 65;
//     while (m <= 90)
//     {
//         printf("code%d, character%c\n", m, m);
//         m++;
//     }
//     m = 97;
//     while (m <= 122)
//     {
//         printf("code: %d, character: %c\n", m, m);
//         m++;
//     }
//     return 0;
// }

// {
//     char m;  // 3 code
//     m=128;
//     if(m==128)
//     {
//         printf("value of m is 128\n");

//     }
//     else
//     {
//         printf("value of m is not 128\n");
//     }

//     if(m==-128)
//     {
//         printf("value of m is -128\n");
//     }
//     else{
//         printf("value of m is not -128");
//     }
//     return 0;
// }

/* 4 code */
// {
//     char m = 130;
//     if (m == 130)
//     {
//         printf("value of m is 130\n");
//     }
//     else
//     {
//         printf("value of m is %d", m);
//     }
//     return 0;
// }

/* 5 code */
// {
//     unsigned char m;

//     m = 255;
//     printf("%d\n", m);

//     m++; // value of m becomes 0
//     printf("%d\n", m);

//     return 0;
// }

/* 6 code */
// {
//     char m;
//     m = 65;
//     printf("%c\n", m);
//     m = 122;
//     printf("%c\n", m);
//     m = '/n';
//     printf("good%cboy%dbreat", m, m);
//     return 0;
// }

{
    char m;
    printf("enter a character : ");
    scanf("%c", &m);
    if (m >= 97 && m <= 122)
    {
        m = m - 32; //  '  ';
    }
    printf("%c\n", m);
    return 0;
}