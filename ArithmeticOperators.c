#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number of a: ");
    scanf("%d",&a);
    printf("Enter number of b: ");
    scanf("%d",&b);
    int sum=a+b;
    printf("Sum: %d\n",sum);
    int sub=a-b;
    printf("Sub: %d\n",sub);
    int mul=a*b;
    printf("Mul: %d\n",mul);
    int div=a/b;
    printf("Div: %d\n",div);
    int mod=a%b;
    printf("Mod: %d\n",mod);
    return 0;

}