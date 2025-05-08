#include <stdio.h>

int main()
{

    int days;
    scanf("%d", &days);

    if (days > 3)
    {
        printf("Cox's bazar\n");
        int remaining = days - 3;

        if (remaining >= 2)
        {
            printf("Saint Martin\n");
        }
    }
    else if (days > 2)
    {
        printf("Restauarant\n");
    }
    else
    {
        printf("Bashai thakbo\n");
    }
}