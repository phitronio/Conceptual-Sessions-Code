#include <stdio.h>
int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    // loop k times
    for (int i = 1; i <= k; i++)
    {
        // takahashi cookie eat -> nijer ta priority age
        if (a >= 1)
        {
            a--;
        }
        // aoki cookie eat
        else if (b >= 1)
        {
            b--;
        }
    }

    printf("%lld %lld", a, b);

    return 0;
}