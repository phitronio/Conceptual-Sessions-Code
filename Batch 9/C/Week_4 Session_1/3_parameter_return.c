#include<stdio.h>

int addNum(int x, int y) {
    int sum = x + y;
    printf("sum: %d\n", sum);

    return sum;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int x, y;
    scanf("%d %d", &x, &y);

    int m = addNum(a, b);
    int n = addNum(x, y);



    // printf("m : %d\n", m);
    // printf("n: %d", n);

    return 0;
}