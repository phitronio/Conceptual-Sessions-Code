#include <stdio.h>

void pattern()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");

        space--;
        star += 2;
    }

    space = 0, star = (2 * n) - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");

        space++;
        star -= 2;
    }
}


int main()
{
    pattern();
    return 0;
}