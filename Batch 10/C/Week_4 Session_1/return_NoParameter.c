#include<stdio.h>

int div()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int dv = a / b;
    return dv;
}

int main()
{
    int x = div();
    printf("%d", x);

    return 0;
}