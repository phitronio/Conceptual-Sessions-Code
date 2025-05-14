#include <stdio.h>
#include <limits.h>
long long int sum_rec(long long int a[], int n, int idx)
{
    if (idx == n)
    {
        return 0;
    }
    // if (idx == n - 1)
    // {
    //     return a[idx]; // a[n-1]
    // }
    long long int sum_v = sum_rec(a, n, idx + 1);
    return a[idx] + sum_v;
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

    long long int sum_value = sum_rec(arr, n, 0);

    printf("%lld\n", sum_value);
    return 0;
}