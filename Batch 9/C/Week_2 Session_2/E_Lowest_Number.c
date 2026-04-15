#include <stdio.h>
#include <limits.h>
int main()
{
    int n; // size of array
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for(int i=0;i<n;i++){
    //     printf("%d ", arr[i]);
    // }

    // lowest number and index find
    int min_val = INT_MAX, min_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_idx = i;
        }
    }
    printf("%d %d", min_val, min_idx + 1); // 1 index base
    return 0;
}