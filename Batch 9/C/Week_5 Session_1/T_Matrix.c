#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int mat[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int prim = 0, sec = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if ( i == j) {
                prim += mat[i][j];
            }

            if (i + j == n-1) {
                sec += mat[i][j];
            }

        }
    }

    int final = abs(prim - sec);
    printf("%d", final);


    return 0;
}