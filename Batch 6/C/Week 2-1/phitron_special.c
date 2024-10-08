#include <stdio.h>

int main()
{

    int bondho_koi_din;
    scanf("%d", &bondho_koi_din);

    if (bondho_koi_din >= 3)
    {
        // cox's bazar
        printf("Cox's Bazar\n");

        int remaining_days = bondho_koi_din - 3;

        if (remaining_days >= 3)
        {
            printf("Saint Martin]\n");
        }
        else
        {
            printf("Cox's Bazar ei thakbo\n");
        }
    }
    else if (bondho_koi_din >= 2)
    {
        // onno destination
        printf("Onno desination\n");
    }
    else
    {
        // basha
        printf("Bashai Module revision dibo boshe boshe\n");
    }
}