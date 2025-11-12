// solution - 4 return type
#include <stdio.h>
#include <limits.h>

int rec(int arr[], int n, int idx)
{
    if (idx == n)
    {
        // base
        return 0;
    }
    int tem_res = rec(arr, n, idx + 1);
    return arr[idx] + tem_res;
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
    // recursion call
    int res = rec(arr, n, 0); // 0-index based

    printf("%d", res);
    return 0;
}