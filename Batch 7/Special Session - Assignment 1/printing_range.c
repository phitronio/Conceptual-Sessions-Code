#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if ((i % 4) == 0 || (i % 13) == 0)
        {
            printf("%d\n", i);
        }
    }
}