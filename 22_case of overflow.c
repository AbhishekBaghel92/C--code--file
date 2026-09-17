#include <stdio.h>
 int main()

/* 1 code */
// {
//     int x;

//     x = 394147483648;

//     printf("%d", x);

//     return 0;
// }


{
    unsigned int x; /* 1st is not a sing bit*/
    x = 2147483659;
    printf("%d\n", x); /* %d means 1st sing bit rest data bit*/
    printf("%u", x);   /* %u means 1st data for unsigned int */
    return 0;
}