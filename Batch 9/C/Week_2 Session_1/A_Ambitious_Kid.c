#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int mnVal = INT_MAX; // 1000000;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);

        // if (x < 0) {
        //     x = x * -1;
        // }
        x = abs(x);

        if (x < mnVal) {
            mnVal = x;
        }
        
    }

    printf("%d", mnVal);


    return 0;
}

// problem link: https://codeforces.com/problemset/problem/1866/A