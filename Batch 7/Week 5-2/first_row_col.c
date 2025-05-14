#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int spe_r = 0; // first row

    for (int j = 0; j < c; j++)
    {
        printf("%d ", matrix[spe_r][j]);
    }
    printf("\n");

    int spe_c = 0; // first column
    for (int j = 0; j < r; j++)
    {
        printf("%d ", matrix[j][spe_c]);
    }
    printf("\n");
    return 0;
}