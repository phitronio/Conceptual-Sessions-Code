#include<stdio.h>
int main()
{
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d %lld %f %c", &a, &b, &c, &d);

    printf("%d\n%lld\n%.2f\n%c", a, b, c, d);

    return 0;
}