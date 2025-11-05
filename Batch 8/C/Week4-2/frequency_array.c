#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];     // main array
    int fre[m + 1]; // frequency array - count

    // frequency array all value set as 0
    for (int i = 0; i <= m; i++)
    {
        fre[i] = 0;
    }

    // array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // frequency calculate
    for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }

    // frequency print
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}