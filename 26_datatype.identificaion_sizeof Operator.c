#include <stdio.h>
int main()

/* Sizeof Operator in C */

/*1 code */
// {
//     int x;
//     int y[5];
//     int z[10][20];

//     printf("Intger sizeof x: %d\n", sizeof(x));
//     printf("Intger sizeof y: %d\n", sizeof(y));
//     printf("Intger sizeof z: %d\n", sizeof(z));
//     printf("Intger sizeof int: %d\n", sizeof(int));
//     printf("Intger sizeof int[5]: %d\n", sizeof(int[5]));
//     printf("Intger sizeof z[10][20]: %d\n", sizeof(z[10][20]));

//     return 0;
// }

/* 2 code  */
// {
//     char l;
//     char k[10];
//     char m[20][30];
//     printf("%d\n", sizeof(char));
//     printf("%d\n", sizeof(k));
//     printf("%d\n", sizeof(m));
//     printf("%d\n", sizeof(char[10]));
//     printf("%d\n", sizeof(m[20][30]));
// }

/* 3 code  */
// {
//     int x;
//     int y[5];
//     int z[6][7];

//     char l;
//     char k[10];
//     char m[20][20];

//     printf("Intger sizeof x: %lu\n", sizeof(x));  // %lu is promat sepecifier for long unsinged int 
//     printf("Intger sizeof y: %lu\n", sizeof(y));
//     printf("Intger sizeof z: %lu\n", sizeof(z));
//     printf("Intger sizeof int: %lu\n", sizeof(int));
//     printf("Intger sizeof int[5]: %lu\n", sizeof(int[5]));
//     printf("Intger sizeof z[10][20]: %lu\n", sizeof(z[6][7]));
//       printf("%lu\n", sizeof(char));
//       printf("%lu",sizeof(l));
//     printf("%lu\n", sizeof(k));
//     printf("%lu\n", sizeof(m));
//     printf("%lu\n", sizeof(char[10]));
//     printf("%lu\n", sizeof(m[20][30]));

// }



       /* 4 code  */
{
    int x;
    int y[5];
    int z[10][20];

    char m;
    char g[30];
    char r[49][55];
    printf("%d\n", sizeof(&x));
    printf("%d\n", sizeof(&y));
    printf("%d\n", sizeof(&z));
    printf("%d\n", sizeof(&m));
    printf("%d\n", sizeof(&g));
    printf("%d\n", sizeof(&r));

    return 0;
}