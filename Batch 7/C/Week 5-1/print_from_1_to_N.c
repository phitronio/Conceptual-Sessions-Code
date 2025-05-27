#include <stdio.h>

void printer(int n)
{

    if (n == 0)
    {
        return;
    }
    printer(n - 1);    // 1 to n-1 print
    printf("%d\n", n); // n print korbe
}

int main()
{

    int n;
    scanf("%d", &n);

    printer(n);

    // ei function e n bole dile function ta
    // 1 to N porjonto print kore dibe
}