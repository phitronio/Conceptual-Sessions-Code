#include <stdio.h>
int main()
{

    const int a = 5;
    int* b = &a;

    *b = 0;
    printf("%d",a);
    return 0;
}
