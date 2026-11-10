#include<stdio.h>

void B()
{
    int z = 30;
    printf("%d\n", z);
}

void A()
{
    int y = 20;

    B();

    printf("%d\n", y);
}

int main()
{
    int x = 10;

    A();

    printf("%d\n", x);

    return 0;
}