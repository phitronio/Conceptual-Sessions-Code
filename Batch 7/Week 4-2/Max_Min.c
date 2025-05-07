#include <stdio.h>
#include <limits.h>

void min_max_print(int arr[], int n)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        else if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max);
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

    min_max_print(arr, n);
    return 0;
}