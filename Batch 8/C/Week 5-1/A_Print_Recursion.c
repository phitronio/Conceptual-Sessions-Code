// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include<stdio.h>

void recur(int n)
{
    if (n == 0) {
        return;
    }

    printf("I love Recursion\n");
    recur(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);

    recur(n);

    return 0;
}