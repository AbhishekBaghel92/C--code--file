#include <stdio.h>

//    // 1 code

// int x;  // Global variable

// void sam();  // Function declaration

// int main()
// {
//     int x = 10;  // Local variable

//     printf("%d\n", x);

//     sam();

//     printf("%d\n", x);

//     return 0;
// }

// void sam()
// {
//     x = 350;  // Changes global x
// }

   //  2 code

#include <stdio.h>

int x;          // Global variable

void sam();

int main()
{
    x = 10;

    printf("%d\n", x);

    sam();

    printf("%d\n", x);

    return 0;
}

void sam()
{
    int x;      // Local variable
    x = 203;

    printf("%d\n", x);
}

