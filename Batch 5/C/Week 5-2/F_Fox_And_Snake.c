// Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/F

#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r, &c);

    for(int i=1;i<=r;i++)
    {
        if(i%2==1)
        {
            for(int j=1;j<=c;j++)
            {
                printf("#");
            }
        }
        else
        {
            if(i%4==0)
            {
                printf("#");
                for(int j=2;j<=c;j++)
                {
                    printf(".");
                }
            }
            else
            {
                for(int j=2;j<=c;j++)
                {
                    printf(".");
                }
                printf("#");
            } 
        }
        printf("\n");
    }
    return 0;
}