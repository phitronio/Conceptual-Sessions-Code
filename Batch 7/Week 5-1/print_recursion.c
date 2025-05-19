#include <stdio.h>

void printer(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    printer(n - 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    printer(n);

    return 0;
}