#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0) // condition
    {
        n = n / 2;
    }
    printf("%d", n);
}