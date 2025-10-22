
#include <stdio.h>
int main()
{
    double n, d, add_new;
    scanf("%lf %lf %lf", &n, &d, &add_new);
    double res = (n * d) / (n + add_new);
    // printf("%lf\n", res);
    // printf("%d\n", (int)res + 1);
    double dif = res - (int)res;
    printf("%lf\n", dif);
    if (dif < .0000001)
    {
        printf("%d\n", (int)res);
    }
    else
    {
        printf("%d\n", (int)res + 1);
    }
    return 0;
}