#include <stdio.h>
int main()
{
    double n, d;
    scanf("%lf %lf", &n, &d);

    double m;
    scanf("%lf", &m);
    double howManyDay = d * n / (n + m);
    printf("%lf\n", howManyDay);
    if (howManyDay - (int)howManyDay == 0)
    {
        printf("%d\n", (int)howManyDay); // double data to int data 
    }
    else
    {
        printf("%d\n", (int)howManyDay + 1);
    }
    double reduce_day = d - howManyDay; //

    printf("%lf", reduce_day);
    return 0;
}
