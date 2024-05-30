// Problem link: https://codeforces.com/problemset/problem/263/A

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int ans;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                ans = abs(i-2) +  abs(j-2);
            }
        }
    }

    printf("%d\n",ans);
    return 0;
}