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

    int l = 0, r = n - 1;

    while (l < r)
    {

        // swapping
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        // pointer movement
        l++;
        r--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}