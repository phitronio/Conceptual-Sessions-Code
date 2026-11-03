#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        // printf("%d\n", i);
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // printf("---------------\n");

    int space = 1;
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int x=1; x<=i; x++ )
        {
            printf("%d", x);
        }
        space++;
        printf("\n");
    }

    return 0;
}