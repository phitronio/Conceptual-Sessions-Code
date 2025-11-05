#include <stdio.h>

// swap it
void swap_it(int *a, int *b)
{
    // a, b -> address
    // *a, *b -> value
    // int *ptr = a;

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("Before swap: %d %d\n", n, m);
    swap_it(&n, &m);
    printf("After swap: %d %d\n", n, m);

    return 0;
}