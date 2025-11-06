#include <stdio.h>

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++) 
        {
            printf("%d",j);
        }
        printf("\n");
    }

    int space = 1;
    for(int i= n-1; i>=1; i--)
    {
        for(int j=1; j<=space; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
        space++;
    }
    

}


int main()
{
    int n;
    scanf("%d", &n);

    pattern(n);
}