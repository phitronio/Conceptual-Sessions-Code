#include<stdio.h>

void recur(int n)
{
    if ( n == 0) return;

    if (n != 1) {
        printf("%d ", n);
    } else {
        printf("%d", n);
    }
    
    recur(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);

    recur(n);

    return 0;
}