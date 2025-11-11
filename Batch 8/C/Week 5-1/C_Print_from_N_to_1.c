// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include<stdio.h>

void recur(int n)
{
    if (n == 0) return;
    
    printf("%d",n);
    if (n != 1) {
        printf(" ");
    }

    recur(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    recur(n);
}