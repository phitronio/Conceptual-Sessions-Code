#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;

    scanf("%d %f %lf %c", &a, &b, &c, &d);
    printf("%d\n%f\n%lf\n%c", a, b, c, d);

    return 0;
}