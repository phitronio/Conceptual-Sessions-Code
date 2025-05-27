#include <stdio.h>

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    int add = x + y;
    int sub = x - y;
    long long int mul = (long long int)x * y;

    printf("%d + %d = %d\n", x, y, add);
    printf("%d * %d = %lld\n", x, y, mul);
    printf("%d - %d = %d\n", x, y, sub);
}