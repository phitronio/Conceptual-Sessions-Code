#include<stdio.h>

int z = 999;

void fun1()
{
    int a = 100;
    printf("%d\n", a);
    printf("%d\n", z);
}

void fun2()
{
    int b = 200;
    printf("%d\n", b);
}

int main()
{
    for(int i=0; i<4; i++) {
        printf("%d ", i);
    }
    printf("\n");
    // printf("%d", i);




    int x = 10;
    printf("%d\n", x);

    if (x > 5)
    {
        int val = 777;
        printf("%d\n", val);
        printf("%d\n", x);
    }




    // fun1();
    // fun2();

    // printf("%d\n", z);

    return 0;
}