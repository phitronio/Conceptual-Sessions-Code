/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <stdio.h>
int main()
{
    int n, m, d;
    scanf("%d %d %d", &n, &m, &d);
    // 15/4 = 3
    float how_many_days = (float)(n * d) / (float)(n + m);
    // printf("%lf", how_many_days); // 8.00000001
    // if (how_many_days > (int)(how_many_days)) // float value how_many_days > floor of how_many_days
    if (how_many_days - (int)(how_many_days)>=.000001) // 6 precision point check
    {
        printf("%d", (int)how_many_days + 1);
    }
    else
    {
        printf("%d", (int)how_many_days);
    }

    // reduce time = original day - day after m programmer added
    return 0;
}