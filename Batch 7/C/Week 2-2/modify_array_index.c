#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // arr[0]=1;
    // arr[1]=5;
    // arr[2]=10;
    // arr[3]=15;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int idx, val;
    scanf("%d %d", &idx, &val);

    // modify index value
    arr[idx] = val;

    // reverse
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}