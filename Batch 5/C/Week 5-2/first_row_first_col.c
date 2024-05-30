#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {

        int r, c;
        scanf("%d %d", &r, &c);
        int a[r][c];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < c; i++)
        {
            printf("%d ", a[0][i]);
        }
        printf("\n");

        for (int i = 0; i < r; i++)
        {
            printf("%d ", a[i][0]);
        }
        printf("\n");
    }
    return 0;
}