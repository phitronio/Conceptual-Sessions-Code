#include<stdio.h>
#include <math.h>

void fun(double x)
{
    printf("%lf", x);

    int b = ceil(x);
    printf("\n%d", b);
}

int main()
{

    double a;
    scanf("%lf", &a);
    fun(a);


    return 0;
}