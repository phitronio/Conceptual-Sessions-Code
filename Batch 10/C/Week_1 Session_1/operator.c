#include<stdio.h>
int main()
{
    int a = 10;
    int b = 4;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a / (b * 1.0);
    int mod = a % b;

    printf("%d\n%d\n%d\n%f\n%d", sum, sub, mul, div, mod);

    

    return 0;
}