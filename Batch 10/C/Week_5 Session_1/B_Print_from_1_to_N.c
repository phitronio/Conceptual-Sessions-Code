#include<stdio.h>

void recur(int a, int target)
{

    if (a > target) return;
    
    printf("%d\n", a);

    recur(a+1, target);

}

int main()
{
    int n;
    scanf("%d", &n);

    recur(1, n);

    return 0;
}