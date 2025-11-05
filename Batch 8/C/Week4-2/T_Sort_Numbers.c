
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, mid, min;

    if (a >= b && a >= c)
    {
        max = a;
        if (b >= c)
        {
            mid = b;
            min = c;
        }
        else
        {
            mid = c;
            min = b;
        }
    }
    else if (b >= a && b >= c)
    {
        max = b;
        if (a >= c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }
    else if (c >= a && c >= b)
    {
        max = c;
        if (a >= b)
        {
            mid = a;
            min = b;
        }
        else
        {
            mid = b;
            min = a;
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d", min, mid, max, a, b, c);

    return 0;
}