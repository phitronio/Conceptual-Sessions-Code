#include<stdio.h>

void welcome()
{
    printf("Hello there!\n");
}

void fun()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int mul = a * b;
    printf("%d\n", mul);
}

int main()
{

    welcome();

    fun();

    fun();

    return 0;
}