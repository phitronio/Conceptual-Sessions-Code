#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // row সংখ্যক h print korbe
        {
            printf("%c ", 64 + i);
        }

        printf("\n");
    }
}