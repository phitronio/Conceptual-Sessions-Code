#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int second_digit = n % 10;
    int first_digit = n / 10;

    if (second_digit == 0)
    {

        // corner case

        printf("YES\n");
    }

    else if (first_digit % second_digit == 0 || second_digit % first_digit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}