#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int rev[n];

    int j = 0;

    for (int i = n - 1; i >= 0; i--)
    {

        rev[j] = a[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }
}