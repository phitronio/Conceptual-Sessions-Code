#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int copy_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        copy_arr[i] = arr[i];
    }

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (copy_arr[i] > copy_arr[j])
            {
                int tmp = copy_arr[i];
                copy_arr[i] = copy_arr[j];
                copy_arr[j] = tmp;
            }
        }
    }
    
    int R[n]; // garbage value
    for (int i = 0; i < n; i++)
    {
        R[i] = arr[i] * copy_arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", R[i]);
    }
    return 0;
}