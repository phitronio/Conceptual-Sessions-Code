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

    int pal = 1;

    while (l <= r)
    {

        if (a[l] != a[r])
        {
            pal = 0;
            break;
        }

        l++; // l k shamner dike niye gesi
        r--; // r k pechoner dike niye ashchi
    }

    if (pal == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}