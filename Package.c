#include<stdio.h>
int main()
{
    int package;
    printf("Enter the package number: ");
    scanf("%d",&package);
    if(package>15){
        printf("You are eligible for the package\n");
         }
        else{
            printf("You are not eligible for the package\n");
        }
   
}