// link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include <stdio.h>
#include <limits.h>

long long int max_v = LLONG_MIN;
void max_find(long long int arr[], int n, int idx)
{
    if (idx == n)
    {
        return;
    }
    max_find(arr, n, idx + 1);
    if (arr[idx] > max_v)
    {
        max_v = arr[idx];
    }
    // // for (int i = 0; i < n; i++)
    // // {
    // if (arr[i] > max_v)
    // {
    //     max_v = arr[i];
    // }
    // // }
}
int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // int max_v = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > max_v)
    //     {
    //         max_v = arr[i];
    //     }
    // }
    // printf("%d\n", max_v);

    // recursion function call
    max_find(arr, n, 0);
    printf("%d\n", max_v);
    return 0;
}