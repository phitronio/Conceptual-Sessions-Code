#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = 1e5 + 1, min_pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i + 1; // 1 index based
        }
    }
    printf("%d %d", min, min_pos);
    return 0;
}