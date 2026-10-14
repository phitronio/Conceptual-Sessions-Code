// DS -> Complexity Analysis
#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int k_th;
        scanf("%d", &k_th);

        int poly_count = 0;
        for (int i = 1; i <= k_th; i++)
        {
            poly_count++;
            // polycarp skip some values
            if (poly_count % 10 == 3 && poly_count % 3 == 0)
            {
                poly_count++;
            }
            else if (poly_count % 10 == 3)
            {
                poly_count++;
                if (poly_count % 3 == 0)
                {
                    poly_count++;
                }
            }
            else if (poly_count % 3 == 0)
            {
                poly_count++;
                if (poly_count % 10 == 3)
                {
                    poly_count++;
                }
            }
        }
        printf("%d\n", poly_count);
    }

    return 0;
}

// // student end code
// #include <stdio.h>
// int main()
// {

//     int t;
//     scanf("%d", &t);

//     for (int i = 1; i <= t; i++)
//     {
//         int k;
//         scanf("%d", &k);
//         int count = 1;
//         int value = 1;
//         while (k != count)
//         {
//             value++;
//             if (value % 3 == 0 || value % 10 == 3)
//             {
//                 continue;
//             }
//             count++;
//         }
//         printf("%d\n", value);
//     }

//     return 0;
// }