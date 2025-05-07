#include <stdio.h>
#include <stdbool.h>
bool pos_neg_zero(int n)
{
    if (n > 0)
    {
        // return 1;
        return true;
    }
    else if (n < 0)
    {
        // return -1;
        return false;
    }
    // else if (n == 0)
    // {
    //     return 0;
    // }
}
int main()
{
    int n;
    scanf("%d", &n);
    bool val = pos_neg_zero(n);
    if (val == true)
    {
        printf("Positive");
    }
    else if (val == false)
    {
        printf("Negative");
    }
    // else if (val == 0)
    else
    {
        printf("Zero");
    }
    return 0;
}