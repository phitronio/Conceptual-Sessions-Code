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

    int palindrome = 1;

    while (l < r)
    {
        if (a[l] != a[r])
        {
            palindrome = 0;
            break;
        }

        // pointer movement
        l++;
        r--;
    }

    if (palindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}