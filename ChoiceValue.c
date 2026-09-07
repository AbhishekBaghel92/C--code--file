#include <stdio.h>

int main()

{
    int choice, x, y, z;
    do
    {
        printf("1, Add\n");
        printf("2, Subtract\n");
        printf("3, Exit\n");

        printf("Enter the your choice: ");
        scanf("%d", &choice);

        if(choice==1)
        {
            printf("enter the *X* number: ");
            scanf("%d",&x);

            printf("enter the *Y* number: ");
            scanf("%d",&y);
            z=x+y;
            printf("%d+%d is: %d\n",x,y,z);
        }

        if(choice==2)
        {
            printf("enter the *x* number: ");
            scanf("%d",&x);
            printf("enter the *y* number: ");
            scanf("%d",&y);
            z=x-y;
            printf("%d-%d is: %d\n",x,y,z);
        }
        if(choice<1 || choice>3)
        {
            printf("invalid choice:\n");
        }
    }
    while(choice!=3);
    return 0;
}