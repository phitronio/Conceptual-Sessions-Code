#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int maximum_value = INT_MIN;
    printf("%d\n", maximum_value);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (maximum_value < x)
        {
            maximum_value = x;
        }
    }

    printf("%d\n", maximum_value);

    return 0;
}