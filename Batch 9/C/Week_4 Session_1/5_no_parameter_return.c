#include<stdio.h>

int fun ()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    return sum;
}

int main()
{
    
    int x = fun();
    printf("X: %d", x);
    return 0;
}