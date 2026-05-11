#include<stdio.h>

void recur(int i, int n)
{
    if (i > n) return;

    printf("I love Recursion\n");

    recur(i+1, n);


}

int main()
{
    int n;
    scanf("%d", &n);

    recur(1, n);

    return 0;
}