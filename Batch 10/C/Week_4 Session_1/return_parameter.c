#include<stdio.h>

int addNumber(int a, int b)
{
    int sum = a + b;
    return sum;
}

int mulNumber(int a, int b) {
    return a * b;
}

int main()
{
    int a, b, x, y;
    scanf("%d %d %d %d",&a, &b, &x, &y);

    int n = addNumber(a, b);

    int m = mulNumber(x, y);

    printf("%d\n", n+m);

    return 0;
}