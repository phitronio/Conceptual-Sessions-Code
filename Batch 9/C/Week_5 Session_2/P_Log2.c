/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n); // 31
    int cnt = 0;
    while (n > 1) // 31
    {
        n /= 2;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}