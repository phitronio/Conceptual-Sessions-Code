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
    // by default no item present
    int flag = 0; // -10^9 -> 10^9
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            flag = 1; // change flag value
            break;
        }
    }

    // not found
    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}