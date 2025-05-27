#include <stdio.h>
#include <limits.h>
int findMax(int a[], int n, int idx)
{
    if (idx == n)
    {
        return INT_MIN;
    }
    // if (idx == n - 1)
    // {
    //     return a[idx]; // a[n-1]
    // }
    int max_v = findMax(a, n, idx + 1);
    if (a[idx] > max_v)
    {
        return a[idx];
    }
    else
    {
        return max_v;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_value = findMax(arr, n, 0);

    printf("%d\n", max_value);
    return 0;
}