#include <stdio.h>

int main()
{

    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++)
    {

        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X > Y)
        {
            int temp = X;
            X = Y;
            Y = temp;
        }

        int sum = 0;

        for (int i = X + 1; i < Y; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
}