#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int first = n / 10;

    int last = n % 10;

    // printf("%d %d", first, last);

    if (last % first == 0 || first % last == 0 ) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I