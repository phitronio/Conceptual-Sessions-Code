#include <stdio.h>

void alphabet_printer(int count)
{
    for (int i = 0; i <= count; i++)
    {
        printf("%c", i + 'a');
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int counter = 0;

    for (int i = 1; i <= n; i++)
    {
        alphabet_printer(counter);
        printf("\n");
        counter += 1;
    }
}
