// 1. https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B - B. Print From 1 to N

#include<stdio.h>

void recur(int n)
{
    if (n == 0) {
        return;
    }
    recur(n-1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    recur(n);

}