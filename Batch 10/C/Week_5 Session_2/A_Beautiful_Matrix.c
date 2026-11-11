// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int mat[6][6];
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     int r, c;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             // printf("%d ", mat[i][j]);
//             if (mat[i][j] == 1)
//             {
//                 r = i;
//                 c = j;
//             }
//         }
//         // printf("\n");
//     }

//     int min_cost = abs(3-r)+abs(3-c);
//     printf("%d",min_cost);
//     return 0;
// }

// // another solution
// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int mat[6][6];
//     int r, c;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             scanf("%d", &mat[i][j]);
//              if (mat[i][j] == 1)
//             {
//                 r = i;
//                 c = j;
//             }
//         }
//     }

//     int min_cost = abs(3-r)+abs(3-c);
//     printf("%d",min_cost);
//     return 0;
// }

// // time complexity reduce
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int mat[6][6];
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             scanf("%d", &mat[i][j]);
//             if (mat[i][j] == 1)
//             {
//                 printf("%d", abs(3 - i) + abs(3 - j));
//             }
//         }
//     }

//     return 0;
// }



// space complexity reduce
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &a);
            if (a == 1)
            {
                printf("%d", abs(3 - i) + abs(3 - j));
            }
        }
    }

    return 0;
}