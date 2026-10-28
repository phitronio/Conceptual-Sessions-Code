#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000000];
    scanf("%s", s);

    int freq[26] = {0};
    int cnt_l =  strlen(s);
    for (int i = 0; i < cnt_l; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            printf("%c : %d\n", 'a' + i, freq[i]);
    }

    return 0;
}