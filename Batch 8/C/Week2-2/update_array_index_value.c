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

    int index;
    int value;
    scanf("%d %d", &index, &value);

    // If index is valid then Update the array at the specified index with the new value
    if (index >= 0 && index < n)
    {
        arr[index] = value;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
input:
5
1 2 3 4 5
2 40

output:
1 2 40 4 5
*/
