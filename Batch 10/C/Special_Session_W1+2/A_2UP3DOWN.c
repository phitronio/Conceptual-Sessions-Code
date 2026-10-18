#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    // up -> use stair for maximum 2 floor
    if (x < y)
    {
        int dif = y - x;
        if (dif <= 2)
        {
            printf("Yes"); // stair uses
        }
        else
        {
            printf("No"); // elevator use
        }
    }

    // down -> use stair for maximum 3 floor
    if (x > y)
    {
        int dif = x - y;
        if (dif <= 3)
        {
            printf("Yes"); // stair uses
        }
        else
        {
            printf("No"); // elevator use
        }
    }
    return 0;
}