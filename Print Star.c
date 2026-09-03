

#include <stdio.h>

int main()

// {
//     int line,star,x,y;
//     line=5;
//     star=1;
//     x=1;
//     while (x<=line)
//     {
//         y=1;
//         while(y<=star)
//         {
//             printf("* ");
//             y++;
//         }
//         printf("\n");
//         x++;
//         star++;
//     }
//     return 0;
// }

{
    int line=5,space=4,star=1,x,y;
    x=1;
    while(x<=line){
        y=1;
        while(y<=space)
        {
            printf(" ");
            y++;
        }
        y=1;
        while(y<=star)
        {
            printf("* ");
            y++;
        }
        printf("\n");
       
        star++;
        space--;
         x++;
    }
    return 0;
}
