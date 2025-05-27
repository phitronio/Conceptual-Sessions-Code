#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // int tmp = a;
    // a = b;
    // b = tmp;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}