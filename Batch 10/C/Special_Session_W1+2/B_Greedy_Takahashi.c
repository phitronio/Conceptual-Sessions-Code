#include <stdio.h>
int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    // takahashi cookie eat -> nijer ta priority age
    if (k <= a)
    {
        a = (a - k); // remaining takahasi cookie
    }
    else
    {
        k = (k - a); // remaining operation calculate
        a = 0;       // takahasi 0 cookie
        // aoki cookie eat
        if (k <= b)
            b = b - k; // ramaining aoki calculate
        else
            b = 0; // aoki 0 cookie
    }

    printf("%lld %lld", a, b);

    return 0;
}