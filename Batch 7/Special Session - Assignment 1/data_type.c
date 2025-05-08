#include <stdio.h>

// newline

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", x);

    long long int y;
    scanf("%lld", &y);
    printf("%lld", y);

    double z;
    scanf("%lf", &z);
    printf("%.2lf", z);

    char c;
    scanf("%c", &c);
    printf("%c", c);
}