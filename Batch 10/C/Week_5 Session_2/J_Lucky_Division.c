#include <stdio.h>
#include <stdbool.h>

// true -> lucky / false -> no lucky

bool isLucky(int a) // 1
{
    while (a > 0) // 1<0
    {
        int LD = a % 10;
        if (LD != 4 && LD != 7)
        {
            return false;
        }
        a /= 10;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    // printf("%d", isLucky(1));

    for (int i = 1; i <= n; i++)
    {
        bool chk = isLucky(i);
        if (chk == true)
        {
            if (n % i == 0)
            {
                // printf("%d", i);
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}