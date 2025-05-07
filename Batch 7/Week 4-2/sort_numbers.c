#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min, mid, max;
    if (a < b && a < c)
    {
        min = a;
        if (b < c)
        {
            mid = b;
            max = c;
        }
        else
        {
            mid = c;
            max = b;
        }
    }
    return 0;
}