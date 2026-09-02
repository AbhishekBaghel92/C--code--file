#include <stdio.h>
int main()
{
    int p, c, m, e, h;
    int z, t, per, grace;
    printf("Enter marks of phy(0-100): ");
    scanf("%d", &p);

    if (p < 0 || p > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter marks of chem(0-100): ");
    scanf("%d", &c);

    if (c < 0 || c > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter marks of math(0-100): ");
    scanf("%d", &m);

    if (m < 0 || m > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter marks of eng(0-100): ");
    scanf("%d", &e);

    if (e < 0 || e > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter marks of his(0-100): ");
    scanf("%d", &h);

    if (h < 0 || h > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    z = 0;
    if (p < 33)
    {
        z++;
    }

    if (c < 33)
    {
        z++;
    }

    if (m < 33)
    {
        z++;
    }

    if (e < 33)
    {
        z++;
    }

    if (h < 33)
    {
        z++;
    }

    printf("Result: pass\n");
    t = p + c + m + e + h;
    per = t / 5;

    printf("Total marks: %d\n", t);
    printf("Percentage: %d%%\n", per);

    if (per >= 60)
    {
        printf("first division\n");
    }

    if (per >= 50 && per < 60)
    {
        printf("second division\n");
    }
    if (per < 45)
    {
        printf("Third division\n");
    }

    else {
        if(z==1){
            grace=0;
           if(p>30 && p<32){
            grace=32-p;
            p = 33;

            printf("pass with grace of %d in phy\n",grace);

        }

        if(c>30 && c<32){
            grace=32-c;
            c = 33;

            printf("pass with grace of %d in chem\n",grace);

        }
    

    if(m>30 && m<32){
            grace=32-m;
            m = 33;

            printf("pass with grace of %d in math\n",grace);

        }

        if(e>30 && e<32){
            grace=32-e;
            e = 33;

            printf("pass with grace of %d in eng\n",grace);

        }

        if (h>30 && h<32){
            grace=32-h;
            h = 33;

            printf("pass with grace of %d in his\n",grace);

        }
        if(grace == 0){
            printf("Result: compartment\n");
        }

    }

    else {
        printf("Result: fail\n");
    }
}

return 0;
}