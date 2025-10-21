#include <stdio.h>
#include <limits.h>
int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int res = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                if (val < res)
                {
                    res = val;
                }
            }
        }

        printf("%d\n", res);
    }
}