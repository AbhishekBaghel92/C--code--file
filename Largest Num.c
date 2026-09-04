#include<stdio.h>
int main()
{
    int x[10],y,largest;;
    y=0;
    while(y<=9)
    {
        printf("Eenter a number x[%d]: ",y);
        scanf("%d",&x[y]);
        y++;

    }

    largest=x[0];
    y=1;
    while(y<=9)
    {
        if(x[y]>largest) //<
        {
            largest=x[y];
        }
        y++;
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}