#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        int len_s = strlen(s);
        int len_t = strlen(t);

        int i = 0, j = 0;
        // common print
        while (i < len_s && j < len_t)
        {
            printf("%c%c", s[i], t[j]);
            i++;
            j++;
        }

        // extra from t string
        while (j < len_t)
        {
            printf("%c", t[j]);
            j++;
        }

        // extra from s string
        while (i < len_s)
        {
            printf("%c", s[i]);
            i++;
        }

        printf("\n");
    }
    return 0;
}