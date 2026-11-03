#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 1;
    for(int i=1; i<=n; i++)
    {
        
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        space--;
        star = star + 2;

        printf("\n");

    }

    space = 0;
    star = (2*n)-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++) {
            printf(" ");
        }
        for(int j=1; j<=star; j++) {
            printf("*");
        }
        printf("\n");

        star -= 2; // star = star - 2;
        space++;
    }

    return 0;
}