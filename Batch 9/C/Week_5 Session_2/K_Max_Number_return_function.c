// link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
// long long int max_v = LLONG_MIN;
long long int max_find(long long int arr[], int n, int idx)
{
    if (idx == n)
    {
        return LLONG_MIN;
    }
    // if (idx == n - 1)
    // {
    //     return arr[idx];
    // }
    long long int temp_max = max_find(arr, n, idx + 1);
    // if (arr[idx] > temp_max)
    // {
    //     return arr[idx];
    // }
    // else
    // {
    //     return temp_max;
    // }
    // return temp_max;
    return fmax(arr[idx], temp_max);
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
    long long int result = max_find(arr, n, 0);
    printf("%lld\n", result);
    return 0;
}