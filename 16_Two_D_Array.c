#include <stdio.h>

int main()
// {
//     int x, y;
//     x = 100;
//     y = 234534;

//     printf("%d\n", x);
//     printf("%d\n", y);

//     printf("\n\n");

//     printf("%12d\n", x);
//     printf("%13d\n", y);

//     return 0;
// }

{
    int choice;
    int x[3][3], y[3][3];
    int row_total, column_total, grand_total;

    int row_index, column_index;

    do
    {
        printf("1, Assept data\n");
        printf("2, print Matrix\n");
        printf("3, trandpose Matrix\n");
        printf("4, Exit\n ");

        printf("enter your choice(1-4): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4)
        {
            printf("invalid choice\n");
            continue;
        }
        if (choice == 1)
        {
            for (row_index = 0; row_index <= 2; row_index++)
            {
                for (column_index = 0; column_index <= 2; column_index++)
                {
                    printf("enter data for(%d,%d)cell: row_index,column_index: ");
                    scanf("%d", &x[row_index][column_index]);
                }
            }
            continue;
        }
        if (choice == 2)
        {
            grand_total =0 ;
            for (row_index = 0; row_index <= 2; row_index++)
            {
                row_total = 0;
                for (column_index = 0; column_index <= 2; column_index++)
                {
                    printf("%12d", x[row_index][column_index]);
                    grand_total = grand_total + x[row_index][column_index];
                    row_total = row_total + x[row_index][column_index];
                }
                printf("%13d", row_total);
                printf("\n");
            }
            for (column_index = 0; column_index <= 2; column_index++)
                ;
            {
                column_total = 0;
                for (row_index = 0; row_index <= 2; row_index++)
                {
                    column_total = column_total + x[row_index][column_index];
                }

                printf("12d", column_total);
            }
            printf("%13d\n", grand_total);
            continue;
        }

        if (choice == 3)
        {
            for (row_index = 0; row_index <= 2; row_index++)
            {
                for (column_index = 0; column_index <= 2; column_index++)
                {
                    y[column_index][row_index] = x[row_index][column_index];
                }
            }

            for (row_index = 0; row_index <= 2; row_index++)
            {
                for (column_index = 0; column_index <= 2; column_index++)
                {
                    x[row_index][column_index] = y[row_index][column_index];
                }
            }

            printf("\nMatrix data transposed\n\n");
            continue;
        }
    } while (choice != 4);
    return 0;
}
