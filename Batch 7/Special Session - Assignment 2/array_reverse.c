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

    for (int i = n - 1; i >= 0; i--)
    {
        // printf("%d ", arr[i]);
        if (i % 2 == 0)
        {
            // even index value print
            printf("%d ", arr[i]);
        }
        if (i % 2 == 1)
        {
            // odd index value print
        }
    }

    return 0;
}