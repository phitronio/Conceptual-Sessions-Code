#include <stdio.h>

void print(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    printf("hello");
    print(n - 1); // recursive call
}

int main()
{

    print(3);

    return 0;
}