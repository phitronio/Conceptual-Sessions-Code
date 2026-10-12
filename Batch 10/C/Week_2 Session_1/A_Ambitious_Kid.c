#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    // int mnVal = 1e9;
    int mnVal = INT_MAX;

    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d", &x);

        if ( x < 0 ) {
            x = x * (-1);
        }
        

        if (x < mnVal) {
            mnVal = x;
        }


    }

    printf("%d", mnVal);

    return 0;
}

// abs() homework

// problem link: https://codeforces.com/problemset/problem/1866/A