#include <stdio.h>
int main()

// print name
// {
//     char name[5]={'a','b','h','i',0};
//     printf("%s",name);
//     return 0;

// }

// print name using for loop

{
char  name[20];
    printf("enter the array element:\n");
    for(int i=0;i<20;i++)
    {
        scanf("%c",&name[i]);
    }
    printf("output array  char:");
      for(int i=0;i<20;i++)
      {
          printf("%c",name[i]);
      }
      return 0;
    
}

