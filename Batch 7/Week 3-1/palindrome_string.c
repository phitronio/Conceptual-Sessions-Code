#include <stdio.h>

int main()
{
    char a[1001];

    scanf("%s", &a);

    int l = 0, r = strlen(a) - 1;

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