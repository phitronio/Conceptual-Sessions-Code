#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a, mid = a, min = a;
    // max find
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    // min find
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    mid = (a + b + c) - (min + max);

    printf("%d\n%d\n%d\n\n%d\n%d\n%d", min, mid, max, a, b, c);

    return 0;
}
