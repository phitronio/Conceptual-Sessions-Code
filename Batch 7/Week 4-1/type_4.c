#include <stdio.h>

void printing_even_array()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (i % 2 == 0)
        {
            printf("%d ", ar[i]);
        }
    }
}

int main()
{
    printing_even_array();
}