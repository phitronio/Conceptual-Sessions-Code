#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);

    int min_num = 100000 + 1;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x < 0)
        {
            x = x * (-1);
        }
        // x = abs(x) ;

        if (x < min_num)
        {
            min_num = x;
        }
    }

    printf("%d\n", min_num);
}