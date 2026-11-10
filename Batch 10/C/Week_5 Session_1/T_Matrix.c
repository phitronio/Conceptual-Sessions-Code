#include<stdio.h>
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

    int pri = 0, sec = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if ( i == j ) {
                pri += mat[i][j];
            }

            if (i + j == n-1) {
                sec += mat[i][j];
            }
        }
    }

    // printf("%d %d", pri, sec);

    int dif = pri - sec;

    if (dif < 0) {
        dif = dif * -1;
    }

    // dif = abs(dif);

    printf("%d", dif);

    return 0;
}