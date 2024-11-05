#include <stdio.h>

void change_to_10(int *x)
{

    *x = 10;
}

int main()
{

    int n = 100;

    // printf("%d\n", &n);

    change_to_10(&n);

    printf("%d\n", n);
}