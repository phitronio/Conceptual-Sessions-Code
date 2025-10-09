#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d", -1);
    }
    else
    {
        for (int num = 1; num <= n; num++)
        {
            if (num % 2 == 0)
            {
                printf("%d\n", num);
            }
        }
    }

    return 0;
}