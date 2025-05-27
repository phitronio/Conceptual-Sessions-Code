#include <stdio.h>
#include <string.h>

void fre_count(char s[], int freq[])
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        // printf("%d ", s[i]);
        int idx = s[i] - 97; // s[i]-'a'
        // printf("%d \n", idx);
        freq[idx]++;
    }
}

int main()
{
    char s[10000001];
    scanf("%s", &s);

    int freq[26] = {0};
    // int len = strlen(s);

    // for (int i = 0; i < len; i++)
    // {
    //     // printf("%d ", s[i]);
    //     int idx = s[i] - 97; // s[i]-'a'
    //     // printf("%d \n", idx);
    //     freq[idx]++;
    // }

    fre_count(s, freq);

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 97, freq[i]);
        }
    }
    return 0;
}