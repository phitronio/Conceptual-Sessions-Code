#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int mat[6][6];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }
    int row, col;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (mat[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int res = abs(row - 3) + abs(col - 3);
    printf("%d", res);
    return 0;
}

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int mat[5][5];

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }

//     int row, col;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (mat[i][j] == 1)
//             {
//                 row = i;
//                 col = j;
//             }
//         }
//     }
//     int res = abs(row - 2) + abs(col - 2);
//     printf("%d", res);
//     return 0;
// }