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

        int i = 0, j = 0;
        while (i < s_len && j < t_len) // common part
        {
            printf("%c%c", S[i], T[j]);
            i++;
            j++;
        }

        // S string big
        while (i < s_len)
        {
            printf("%c", S[i]);
            i++;
        }

        // T string big
        while (j < t_len)
        {
            printf("%c", T[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}