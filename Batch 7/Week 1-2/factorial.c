#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++)
    {

        int n;
        scanf("%d", &n);

        long long int fact = 1;

        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("%lld\n", fact);
    }
}