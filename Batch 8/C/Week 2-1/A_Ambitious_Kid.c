#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int mnVal = 100000+5;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        x = abs(x);

        if (x < mnVal) {
            mnVal = x;
        }

    }

    printf("%d", mnVal);
}

// problem link: https://codeforces.com/problemset/problem/1866/A