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
    int freq[128] = {0}; // 0 - 127 [a=97 -> z = 122]
    for (int ind = 0; ind < len; ind++)
    {
        int ascii_val = (int)str[ind]; // char to int
        freq[ascii_val]++;
    }

    for (int f_i = 97; f_i <= 122; f_i++)
    {
        // if (freq[f_i] > 0)
        // {
        //     printf("%c : %d\n", f_i, freq[f_i]);
        // }
        if (freq[f_i] == 0)
        {
            continue;
        }
        printf("%c : %d\n", f_i, freq[f_i]);
    }
    return 0;
}