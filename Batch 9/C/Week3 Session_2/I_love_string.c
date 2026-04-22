/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    // while (tc--)
    for (int t = 1; t <= tc; t++)
    {
        char S[55], T[55];
        scanf("%s %s", S, T);
        int i = 0, j = 0;
        // common part
        while (i < strlen(S) && j < strlen(T))
        {
            printf("%c%c", S[i], T[j]);
            i++;
            j++;
        }

        // remaining part of S
        while (i < strlen(S))
        {
            printf("%c", S[i]);
            i++;
        }
        // remaining part of T
        while (j < strlen(T))
        {
            printf("%c", T[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}