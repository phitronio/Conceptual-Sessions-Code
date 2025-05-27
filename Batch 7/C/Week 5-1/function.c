#include <stdio.h>

int pi_2()
{
    return 3;
}

int pi()
{
    int x = pi_2();
    return x;
}

int main()
{

    printf("%d", pi());
}