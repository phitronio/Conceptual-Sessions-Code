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
    char str[10000001]; // submit
    // char str[100001]; // OS check
    scanf("%s", &str);
    int len = strlen(str);
    int freq[26] = {0}; // 0 - 25 [a=0 -> z = 25]
    for (int ind = 0; ind < len; ind++)
    {
        int ascii_val = (int)str[ind];        // char to int
        int index_within_25 = ascii_val - 97; // ascii to range[0-25]
        freq[index_within_25]++;
    }

    for (int f_i = 0; f_i < 26; f_i++)
    {
        // if (freq[f_i] > 0)
        // {
        //     printf("%c : %d\n", f_i, freq[f_i]);
        // }
        if (freq[f_i] == 0)
        {
            continue;
        }
        // f_i + 97 is convert range[0-25] to 97 or 'a'
        printf("%c : %d\n", (char)(f_i + 97), freq[f_i]);
    }
    return 0;
}