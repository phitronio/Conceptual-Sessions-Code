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
    char str[101];
    scanf("%s", &str);
    int len = strlen(str);
    // int cnt_sml = 0, cnt_cap = 0, cnt_dig = 0;
    int cnt[3] = {0};
    for (int ind = 0; ind < len; ind++)
    {
        if (str[ind] >= '0' && str[ind] <= '9')
        {
            // cnt_dig++;
            // 2 index is room of digit count
            cnt[2]++;
        }
        else if (str[ind] >= 'a' && str[ind] <= 'z')
        {
            // cnt_sml++;
            // 1 index for small character
            cnt[1]++;
        }
        else if (str[ind] >= 'A' && str[ind] <= 'Z')
        {
            // cnt_cap++;
            // 0 index for capital character
            cnt[0]++;
        }
    }
    // printf("%d %d %d", cnt_dig, cnt_cap, cnt_sml);
    printf("%d %d %d", cnt[2], cnt[0], cnt[1]);
    return 0;
}