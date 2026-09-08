#include <stdio.h>

int main()

     // using while loop
// {
//     int x;
//     x = 1;
//     while (x <= 5)
//     {
//         if (x % 4)
//         {
//             printf("%d\n", x);
//         }
//         x++;
//         printf("cool\n");
//     }
//     return 0;
// }


       //  using for loop

    //    {
    //     int x;
    //     x=1;
    //     for(x=1;x<=5;x++)
    //     {
    //         if(x%4){
    //             printf("%d\n",x);
    //             continue;
    //         }
    //         printf("cool\n");
    //     }
    //     return 0;
    //    }

    // do wuile loop
    {
        int x=1;
        do{
            printf("%d\n",x);
            if(x%4){
                x=17;
                continue;
            }
            x++;
        }
        while(x<=5);
        return 0;
    }