#include<stdio.h>
int main()
// {
//     int x,n;
//     printf("Eenter the x number: ");
//     scanf("%d",&x);
//     printf("Eenter the n number: ");
//     scanf("%d",&n);
//     while(x<=n)
//     {
//         if(x%4!=0)
//         {
//             printf("%d\n",x);
//             // x++;
//             // continue;

//         }
//         x++;
//         printf("cool\n");
//     }
//     return 0;
// }

//using for loop
{
    int x,n;
    printf("Enter the x number: ");
    scanf("%d",&x);
    printf("Enter the n number: ");
    scanf("%d",&n); 
    for(x ; x<=n;x++)
    {
        if(x%4!=0)
        {
            printf("%d\n",x);
            continue;
        }
        printf("cool\n");
    }
}

// {
//     int x=1;
//     do{
//         printf("%d\n",x);
//         if(x==3)

//         {
//             x=17;
//             continue;
//         }
//         x++;

//     }
//     while(x<=5);
//     return 0;
// }
