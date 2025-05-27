#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    int sum_pos = 0, sum_neg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // 10^5>n
        if (arr[i] > 0)
        {
            sum_pos += arr[i];
        }
        else
        {
            sum_neg += arr[i];
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    return 0;
}