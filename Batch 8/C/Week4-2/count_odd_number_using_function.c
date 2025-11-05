#include <stdio.h>

int count_odd(int arr[], int sz)
{
    int cnt_odd = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cnt_odd++;
        }
    }
    return cnt_odd;
}

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }

    int res = count_odd(arr, sz);
    printf("%d\n", res);
    return 0;
}