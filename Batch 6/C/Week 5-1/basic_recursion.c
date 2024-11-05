#include <stdio.h>

void print_hello_n_times(int n)
{

    if (n == 0)
    {
        return;
    }

    printf("Hello\n"); // ami ekbar print korlam

    print_hello_n_times(n - 1); // bhai baki tmi 4 bar print koro
}

int main()
{

    print_hello_n_times(5);

    return 0;
}