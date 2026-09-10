#include <stdio.h>
// 1 code
// void lmn(int p, int q)
// {
//     int r;
//     r = p + q;
//     printf("total is %d\n", r);
// }

// int main()
// {
//     int x, y;
//     x = 10;
//     y = 20;
//     lmn(x, y);
//     printf("cool\n");
//     x = 100;
//     y = 200;
//     lmn(x, y);
//     return 0;
// }

// 2 code
// int main()
// {
//     int x, y;
//     x = 1039;
//     y = printf("%d", x);
//     printf("\n");

//     printf("%d\n", y);
//     y = printf("good id great\n");
//     printf("%d\n", y);
//     return 0;
// }

//  3code

// int main()
// {
//     printf("%d\n",printf("hello\n"));
// }

// 4 code

// int lmn(int, int);
// int main()
// {
//     int x, y, z;
//     x = 10;
//     y = 20;

//     z = lmn(x, y);
//     printf("total is %d\n", z);
//     printf("cool\n");
//     x = 100;
//     y = 200;
//     z = lmn(x, y);
//     printf("total is %d\n", z);
//     return 0;
// }

// int lmn(int p, int q)
// {
//     int r;
//     r = p + q;
//     return r;
// }

int add(int, int);
int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("total id %d\n", add(x, y));
    printf("cool\n");
    x = 300;
    y = 4000;

    printf("total is %d\n", add(x, y));
    return 0;
}

int add(int p, int q)
{
    int r;
    r = p + q;
    return r;
}