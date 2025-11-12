// solution - 4 return type
#include <stdio.h>
#include <limits.h>

int rec(long long int n)
{
    if (n < 2)
    {
        // base
        return 0;
    }
    int tem_res = rec(n / 2);
    return 1 + tem_res;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    int res = rec(n);

    printf("%d", res);
    return 0;
}