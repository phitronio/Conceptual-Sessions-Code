#include <stdio.h>
#include <string.h>
int main()
{
    // int arr[10000];   // array
    char str[10000005]; // 10^7
    scanf("%s", str);
    // printf("%s", str);
    int fre_arr[26] = {0};
    // printf("Initial Frequency array: \n");
    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%d\n", fre_arr[i]);
    // }

    // printf("%d", 'z' - 'a');
    // printf("%d\n", '9' - '0');
    int str_len = strlen(str);
    for (int k = 0; k < str_len; k++)
    {
        // printf("%c\n", str[k]); // characters
        // printf("%d\n", str[k]);       // ascii characters
        // printf("%d\n", str[k] - 'a'); // ascii characters - 0 index based
        int idx = str[k] - 'a';
        fre_arr[idx]++;
    }

    // printf("After calculate Frequency array: \n");
    for (int i = 0; i < 26; i++)
    {
        if (fre_arr[i] != 0)
        {
            printf("%c : %d\n", i + 'a', fre_arr[i]);
        }
    }
    return 0;
}