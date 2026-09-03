#include<stdio.h>

int main()
//{

//     int e,f;
//     printf("Enter Start : e : number: ");
//     scanf("%d", &e);    
//     printf("Enter Start : f : number: ");
//     scanf("%d", &f);
//     //e=1;
//     while(e<=3)
//     {
//        // f=1;
//         while(f<=3)
//         {
//             printf("%d %d\n",e,f);
//             f++;
//         }
//         e++;
//     }
//     return 0;
// }

// {
//     int e,f;
//     e=0;
//     while(e<=3)
//     {
//         f=e+1;
//         while(f<=3)
//         {
//             printf("%d %d\n",e,f);
//             f++;
//         }
//         e++;
//     }
//     return 0;
// }


{
    int e,f;
    int g=3;
    while(g>=0){
        e=0;
        f=1;
        while(e<=g){
            printf("%d %d\n",e,f);
            e++;
            f++;
        }
        g--;
    }
    return 0;
}