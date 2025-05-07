#include <stdio.h>
#include <limits.h>

int count_odd(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cnt++;
        }
    }
    return cnt;
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

    printf("%d", count_odd(arr, n));
    return 0;
}