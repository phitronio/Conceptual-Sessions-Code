// #include <stdio.h>
// #include <string.h>

// // char s[1000000000]; // global string size can be greater than 10^6

// int main()
// {
//     char s[1000000];
//     scanf("%s", s);

//     int freq[26] = {0};
//     int cnt_l =  strlen(s);
//     for (int i = 0; i < cnt_l; i++)
//     {
//         freq[s[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > 0)
//             printf("%c : %d\n", 'a' + i, freq[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

// char s[1000000000]; // global string size can be greater than 10^6

// no return, parameter (array, string -> pass by reference)
void freq_str(char s[],int freq[])
{
    int cnt_l = strlen(s);
    for (int i = 0; i < cnt_l; i++)
    {
        freq[s[i] - 'a']++;
    }
}

int main()
{
    char s[1000000];
    scanf("%s", s);

    int freq[26] = {0};
    // function call
    freq_str(s, freq);

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            printf("%c : %d\n", 'a' + i, freq[i]);
    }

    return 0;
}