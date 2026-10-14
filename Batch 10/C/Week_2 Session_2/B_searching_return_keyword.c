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
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int x;
    scanf("%d", &x);
    // printf("%d", x);

    // searching x
    // pabo
    // int idx;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            // printf("%d is found\n", x);
            // idx = i;
            // printf("%d is found in %d index\n", x, i);
            // break;
            printf("%d", i);
            return 0;
        }
    }
    // pabo na
    // printf("%d is not found\n", x);
    printf("-1");

    return 0;
}