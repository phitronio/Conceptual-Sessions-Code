#include<stdio.h>

void recur(int n)
{
    if (n == 0) return;

    recur(n-1);
    
    printf("%d\n", n);
}


int main()
{
   int n;
   scanf("%d", &n);
   
   recur(n);

    return 0;
}