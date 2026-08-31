#include <stdio.h>
int main()  

{
    int Divison;
    printf("Enter your division: ");
    scanf("%d",&Divison);
    if(Divison>=90){
        printf("Grade: A\n");
    }
    else if(Divison>=80){
        printf("Grade: B\n");
    }
    else if(Divison>=70){
        printf("Grade: C\n");
    }
    else if(Divison>=60){
        printf("Grade: D\n");
    }
    else{
        printf("Grade: F\n");
    }
}