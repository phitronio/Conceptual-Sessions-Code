#include<stdio.h>

void addNumber(int a, int b)
{
    int sum = a + b;
    printf("%d\n", sum);
}

int main()
{
    
    int x, y;
    scanf("%d %d", &x, &y);
    addNumber(x, y);

    return 0;
}