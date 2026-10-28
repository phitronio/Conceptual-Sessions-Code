#include <stdio.h>
int main()
{
    float n, d, m;
    scanf("%f %f %f", &n, &d, &m);
    float res_days = (n * d) / (n + m);

    float precision = res_days - (int)(res_days);
    
    printf("%f\n", precision);
    if (precision < .000001)
    {
        printf("%d\n", (int)res_days);
    }
    else
    {
        printf("%d\n", (int ) res_days+1);
    }
    return 0;
}

// .000001 > .0000001