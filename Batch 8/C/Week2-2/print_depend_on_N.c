
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // positive
    // if (n > 0)
    // {
    //     for (int i = 0; i <= n; i++)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    // negative
    if (n < 0)
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// segmentation
