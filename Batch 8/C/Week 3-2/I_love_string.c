#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char S[55], T[55];
        scanf("%s %s", S, T);
        // printf("%s\n%s", S, T);
        int s_len = strlen(S); // 4
        int t_len = strlen(T); // 8

        int min_cal;
        if (s_len < t_len)
        {
            min_cal = s_len;
        }
        else
        {
            min_cal = t_len;
        }

        for (int i = 0; i < min_cal; i++) // common part
        {
            printf("%c%c", S[i], T[i]);
        }

        // S string big
        int rem_s = s_len - min_cal;
        if (rem_s > 0)
        {
            for (int j = min_cal; j < s_len; j++)
            {
                printf("%c", S[j]);
            }
        }

        // T string big
        int rem_t = t_len - min_cal;
        if (rem_t > 0)
        {
            for (int j = min_cal; j < t_len; j++)
            {
                printf("%c", T[j]);
            }
        }
        printf("\n");
    }

    return 0;
}