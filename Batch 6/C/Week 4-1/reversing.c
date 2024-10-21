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

    while (l <= r)
    {
        // swapping
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;

        l++; // l k shamner dike niye gesi
        r--; // r k pechoner dike niye ashchi
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}