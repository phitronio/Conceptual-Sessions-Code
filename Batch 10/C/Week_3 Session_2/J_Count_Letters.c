#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000000];
    scanf("%s", &str);
    // printf("%s",str);
    int cnt_letter[123] = {0};
    // for(int i=0;i<123;i++){
    //     cnt_letter[i]=0;
    // }

    int str_len = strlen(str);
    for (int i = 0; i < str_len; i++)
    {
        // printf("%c\n",str[i]);
        char ch = str[i]; // character
        // cnt_letter[ch] = cnt_letter[ch]+1;
        cnt_letter[ch]++;
    }

    // printf("%d\n",cnt_letter['a']);
    // printf("%d\n",cnt_letter['b']);
    // printf("%d\n",cnt_letter['c']);
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt_letter[i] > 0)
        {
            printf("%c : %d\n", i, cnt_letter[i]);
        }
    }

    return 0;
}

// int arr[10^5];
// 4bytes == 32bits

// 10^7 number = 40MB

// char str[10^5];
// 1byte == 8bits
// 10^7 char = 10MB