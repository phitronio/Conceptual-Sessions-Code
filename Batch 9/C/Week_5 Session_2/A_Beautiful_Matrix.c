/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/263/A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int mat[5][5];
    int r, c;
    int mid_i=2, mid_j=2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    // int move_x = abs(2 - r);
    // int move_y = abs(2 - c);
    int move_x = abs(mid_i - r);
    int move_y = abs(mid_j - c);
    printf("%d\n", move_x + move_y);
    return 0;
}