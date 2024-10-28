#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r, &c);
    int a[r][c],b[r][c], sum[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}