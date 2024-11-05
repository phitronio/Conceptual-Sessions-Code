#include <stdio.h>

// no parameter , no return
void max_min()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int minimum = 100001;

    for (int i = 0; i < n; i++)
    {
        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }

    int maximum = -1;

    for (int i = 0; i < n; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
        }
    }

    printf("%d %d\n", minimum, maximum);
}

int main()
{
    max_min();
}