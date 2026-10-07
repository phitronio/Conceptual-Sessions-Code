#include <stdio.h>
int a; // global scope

int main()
{
    int n; // local scope (Block Scope)
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}