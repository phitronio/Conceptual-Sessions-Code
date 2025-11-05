#include <stdio.h>
#include <string.h>

// function
void fre_of_str(char str[], int fre_arr[])
{
    int str_len = strlen(str);
    // '\0' = null
    for (int k = 0; k < str_len; k++)
    // for (int k = 0; str[k] != '\0'; k++)
    {
        // printf("%c\n", str[k]); // characters
        // printf("%d\n", str[k]);       // ascii characters
        // printf("%d\n", str[k] - 'a'); // ascii characters - 0 index based
        int idx = str[k] - 'a';
        fre_arr[idx]++;
    }
}

//
// void print_freq(int fre_arr[], int sz)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         if (fre_arr[i] != 0)
//         {
//             printf("%c : %d\n", i + 'a', fre_arr[i]);
//         }
//     }
// }
void print_freq(int fre_arr[])
{
    for (int i = 0; i < 26; i++)
    {
        if (fre_arr[i] != 0)
        {
            printf("%c : %d\n", i + 'a', fre_arr[i]);
        }
    }
}

int main()
{

    char str[100005]; // 10^7
    scanf("%s", str);

    int fre_arr[26] = {0};

    // calculate frequency
    fre_of_str(str, fre_arr);

    // printf("After calculate Frequency array: \n");
    // print_freq(fre_arr, 26);
    print_freq(fre_arr);
    return 0;
}