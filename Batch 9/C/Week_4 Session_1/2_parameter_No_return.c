#include<stdio.h>

void addNum(int x, int y) {
    int sum = x + y;
    printf("sum: %d\n", sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int x, y;
    scanf("%d %d", &x, &y);

    addNum(a, b);
    addNum(x, y);

    return 0;
}