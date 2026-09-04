#include<stdio.h>
int main()
{
    int x[10],y,t;
    int largest,smallest,second_largest;;

    y=0;
    while(y<=9)
    {
        printf("Enter a number x[%d]: ",y);
        scanf("%d",&x[y]);
        y++;
    }
    largest=x[0];
    smallest=x[0];
    y=0;
    while(y<=9)
    {
        if(x[y]>largest)
        {
            largest=x[y];
        }
        if(x[y]<smallest)
        {
            smallest=x[y];
        }
        y++;
    }
    if(largest==smallest)
    {
        printf("All numbers are equal. No second largest number exists.\n");
        return 0;
    }
    else{
        second_largest=smallest;
        y=0;
        while(y<=9)
        {
            if(x[y]>second_largest && x[y]<largest)
            {
                second_largest=x[y];
            }
            y++;
        }
        printf("The second largest number is:  %d\n", second_largest);
    }
    return 0;

}