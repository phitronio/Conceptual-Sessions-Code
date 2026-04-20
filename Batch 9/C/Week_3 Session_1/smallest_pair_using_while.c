#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int mnVal = INT_MAX;

        for (int i = 0; i <= n - 2; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                if (val < mnVal)
                {
                    mnVal = val;
                }
            }
        }

        printf("%d\n", mnVal);
    }

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I 