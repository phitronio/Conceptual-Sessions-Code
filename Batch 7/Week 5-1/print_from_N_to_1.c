#include <stdio.h>

void printer(int n)
{

    if (n == 1)
    {
        printf("%d", n);
        return;
    }

    printf("%d ", n);
    printer(n - 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    printer(n);

    // ei function er kaj N theke 1 porjonto print kora
}