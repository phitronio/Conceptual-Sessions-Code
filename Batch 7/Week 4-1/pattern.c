#include <stdio.h>

void star_printer(int count)
{
    for (int i = 1; i <= count; i++)
    {
        printf("*");
    }
}

void space_printer(int count)
{

    for (int i = 1; i <= count; i++)
    {
        printf(" ");
    }
}

void alphabet_printer(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", i + 'a');
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    // 1st part

    int star_tracker = 1;
    int space_tracker = n - 1;

    for (int i = 1; i <= n; i++)
    {
        space_printer(space_tracker);
        star_printer(star_tracker);
        printf("\n");

        // next line e koita space and star print hobe
        // sheta ekhane specify korte hobe
        space_tracker--;
        star_tracker += 2;
    }

    // 2nd part

    star_tracker = n * 2 - 1;
    space_tracker = 0;

    for (int i = 1; i <= n; i++)
    {
        space_printer(space_tracker);
        star_printer(star_tracker);
        printf("\n");

        // next line e koita space and star print hobe
        // sheta ekhane specify korte hobe
        space_tracker++;
        star_tracker -= 2;
    }
}