#include <stdio.h>

// parameter , return
int add1(int a, int b)
{
    int sum = a + b;

    return sum;
}

// no parameter (function input nibe), return ( main receive)
int add2()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;

    return sum;
}

// no return , no parameter
void add3()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;

    printf("%d\n", sum);
}

int main()
{

    add3();
}