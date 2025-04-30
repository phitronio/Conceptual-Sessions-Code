#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    // arr[2] = -7;
    // arr[1] = 5;
    // arr[0] = -5;
    // arr[3] = -9;
    // arr[4] = 10;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);
    int sum_pos = 0, sum_neg = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] > 0)
        {
            // pos
            sum_pos += arr[i];
        }
        else
        {
            // neg
            sum_neg += arr[i];
        }
    }

    printf("%d %d", sum_pos, sum_neg);

    return 0;
}