#include <stdio.h>

int a[1001];

int max_from_this_index(int index, int n)
{

    if (index == n - 1)
    {
        return a[index];
    }

    int right_side_maximum = max_from_this_index(index + 1, n);

    if (right_side_maximum > a[index])
    {
        return right_side_maximum;
    }
    else
    {
        return a[index];
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d\n", max_from_this_index(0, n));
}