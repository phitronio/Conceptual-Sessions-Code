#include<stdio.h>

int a = 200; // global scope



int main()
{
    int x = 10;

    printf("%d\n", x); 


    if (x > 5)
    {
        int b = 99;
        printf("%d %d\n", x, b);
    }

    // printf("%d ", b);
    printf("%d", a);

    return 0;
}