#include <stdio.h>
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
    int x; // target element
    scanf("%d", &x);

    // target find or not
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            // break;
            return 0;
        }
        // else
        // {
        //     printf("-1");
        // }
    }

    // not found
    printf("-1");

    return 0;
}