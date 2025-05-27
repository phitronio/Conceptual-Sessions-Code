#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    if ((x % 4) == 0 || (x % 13) == 0)
    {

        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}