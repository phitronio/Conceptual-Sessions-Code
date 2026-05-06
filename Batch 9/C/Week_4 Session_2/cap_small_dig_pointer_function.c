#include <stdio.h>
#include <string.h>

// 4 type - depend on return and paraperter
// paramerter pass in function - pass by value, pass by reference
// pointer


// // no return and parameter
// void count_cap_sml_dig(char str[])
// {
//     int len = strlen(str);
//     int cnt_sml = 0, cnt_cap = 0, cnt_dig = 0;
//     // // int cnt[3] = {0};
//     for (int ind = 0; ind < len; ind++)
//     {
//         if (str[ind] >= '0' && str[ind] <= '9')
//         {
//             cnt_dig++;
//             // 2 index is room of digit count
//             // cnt[2]++;
//         }
//         else if (str[ind] >= 'a' && str[ind] <= 'z')
//         {
//             cnt_sml++;
//             // 1 index for small character
//             // cnt[1]++;
//         }
//         else if (str[ind] >= 'A' && str[ind] <= 'Z')
//         {
//             cnt_cap++;
//             // 0 index for capital character
//             // cnt[0]++;
//         }
//     }
//     printf("%d %d %d", cnt_dig, cnt_cap, cnt_sml);
//     // printf("%d %d %d", cnt[2], cnt[0], cnt[1]);
// }

// int main()
// {
//     char str[101];
//     scanf("%s", &str); // string input
//     count_cap_sml_dig(str);
//     return 0;
// }

// return and parameter
// int count_dig(){
//     return ;
// }
// int count_sml(){
//     return ;
// }
// int count_cap(){
//     return ;
// }
// no return and parameter
void count_cap_sml_dig(char str[], int *c_cap, int *c_sml, int *c_dig)
{
    int len = strlen(str);
    // // int cnt[3] = {0}; // Home Task
    for (int ind = 0; ind < len; ind++)
    {
        if (str[ind] >= '0' && str[ind] <= '9')
        {
            (*c_dig)++;
            // 2 index is room of digit count
            // cnt[2]++;
        }
        else if (str[ind] >= 'a' && str[ind] <= 'z')
        {
            (*c_sml)++;
            // 1 index for small character
            // cnt[1]++;
        }
        else if (str[ind] >= 'A' && str[ind] <= 'Z')
        {
            (*c_cap)++;
            // 0 index for capital character
            // cnt[0]++;
        }
    }
    // printf("%d %d %d", cnt[2], cnt[0], cnt[1]);
}

int main()
{
    char str[101];
    scanf("%s", &str); // string input
    int cnt_sml = 0, cnt_cap = 0, cnt_dig = 0;
    count_cap_sml_dig(str, &cnt_cap, &cnt_sml, &cnt_dig);

    // print count
    printf("%d %d %d", cnt_dig, cnt_cap, cnt_sml);
    return 0;
}