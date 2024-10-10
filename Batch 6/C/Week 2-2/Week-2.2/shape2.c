// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int space = n - 1;
//     int star = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//             printf(" ");
//         space--;
//         for (int j = 1; j <= star; j++)
//             printf("*");
//         star += 2;
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n-1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            printf(" ");
        space--;
        for (int j = 1; j <= star; j++)
            printf("%d ",j);
        star++;
        printf("\n");
    }
    return 0;
}