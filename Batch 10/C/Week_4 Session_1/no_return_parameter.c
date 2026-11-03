#include<stdio.h>


void fun(int a, int b)
{
    int mul = a * b;
    printf("%d\n", mul);
}


int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int n, m;
    scanf("%d %d", &n, &m);

    fun(x, y);
    fun(n, m);

    return 0;
}