#include <stdio.h>

// function string parameter and return/print count small, capital, digit
// function cap_small_dig(str){
// }

// char str[100];
// // no return, no parameter
// void count_cap_small_dig()
// {
//     int cnt_cap = 0, cnt_small = 0, cnt_digit = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             cnt_cap++;
//         }
//         else if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             cnt_small++;
//         }
//         else if (str[i] >= '0' && str[i] <= '9')
//         {
//             cnt_digit++;
//         }
//     }
//     printf("Capital letters: %d\n", cnt_cap);
//     printf("Small letters: %d\n", cnt_small);
//     printf("Digits: %d\n", cnt_digit);
// }

// // no return, parameter
// // void count_cap_small_dig(char *str)
// void count_cap_small_dig(char str[])
// {
//     int cnt_cap = 0, cnt_small = 0, cnt_digit = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             cnt_cap++;
//         }
//         else if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             cnt_small++;
//         }
//         else if (str[i] >= '0' && str[i] <= '9')
//         {
//             cnt_digit++;
//         }
//     }
//     printf("Capital letters: %d\n", cnt_cap);
//     printf("Small letters: %d\n", cnt_small);
//     printf("Digits: %d\n", cnt_digit);
// }

// no return, parameter (pass by reference)
// void count_cap_small_dig(char *str)
// arr[3]
void count_cap_small_dig(char str[], int *x, int *y, int *z)
{
    // *x=100;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // x++; // address update
            (*x)++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            (*y)++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            (*z)++;
        }
    }

    // printf("Capital letters: %d\n", x);
    // printf("Small letters: %d\n", y);
    // printf("Digits: %d\n", z);
}

int main()
{
    char str[100];
    scanf("%s", str);
    int cnt_cap = 0, cnt_small = 0, cnt_digit = 0;

    count_cap_small_dig(str, &cnt_cap, &cnt_small, &cnt_digit);

    printf("Capital letters: %d\n", cnt_cap);
    printf("Small letters: %d\n", cnt_small);
    printf("Digits: %d\n", cnt_digit);

    // int cnt_cap = 0, cnt_small = 0, cnt_digit = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         cnt_cap++;
    //     }
    //     else if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         cnt_small++;
    //     }
    //     else if (str[i] >= '0' && str[i] <= '9')
    //     {
    //         cnt_digit++;
    //     }
    // }
    // printf("Capital letters: %d\n", cnt_cap);
    // printf("Small letters: %d\n", cnt_small);
    // printf("Digits: %d\n", cnt_digit);
    return 0;
}