/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

int cnt = 0;
void log2_cal(long long int n)
{
    if (n <= 1)
        return;
    log2_cal(n / 2);
    cnt++;
    // while (n > 1) // 31
    // {
    // n /= 2;
    // cnt++;
    // }
}

#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n); // 31

    log2_cal(n);
    printf("%d\n", cnt);
    return 0;
}