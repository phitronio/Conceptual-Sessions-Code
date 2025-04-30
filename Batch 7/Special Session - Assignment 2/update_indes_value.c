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
    int index, value;
    scanf("%d %d", &index, &value);

    // print arrray
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d %d\n", index, value);

    // index value update
    arr[index] = value;

    // print arrray
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}