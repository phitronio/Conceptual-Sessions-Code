#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[6][6];
    int pos_1_r, pos_1_c, mid_pos_i = 3, mid_pos_j = 3;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                pos_1_r = i;
                pos_1_c = j;
            }
        }
    }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    int res = abs(mid_pos_i - pos_1_r) + abs(mid_pos_j - pos_1_c);
    printf("%d", res);

    return 0;
}