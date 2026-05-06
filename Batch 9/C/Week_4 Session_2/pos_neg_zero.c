#include <stdio.h>

// int fun(int a)
char fun(int a)
{
    if (a > 0)
    {
        // return 1;
        return 'p';
    }
    else if (a < 0)
    {
        // return -1;
        return 'n';
    }
    else
    {
        // return 0;
        return 'z';
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ret = fun(n);
    // positive
    // if (ret == 1)
    if (ret == 'p')
    {
        printf("Positive\n");
    }
    // negative
    // else if (ret == -1)
    else if (ret == 'n')
    {
        printf("Negative\n");
    }
    // zero
    // else if (ret == 0)
    else if (ret == 'z')
    {
        printf("Zero\n");
    }
    return 0;
}