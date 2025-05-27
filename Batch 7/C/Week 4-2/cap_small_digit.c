#include <stdio.h>
#include <string.h>

int count_digit_small_cap(char s[], int *cnt_dig, int *cnt_cap, int *cnt_sml)
{
    // int count_digit = 0, count_small = 0, count_cap = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // count digit
        // '0' = 48 , '9'=57
        if (s[i] >= '0' && s[i] <= '9')
        {
            // digit
            (*cnt_dig)++; // dereference
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // digit
            (*cnt_sml)++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // digit
            (*cnt_cap)++;
        }
    }
    // printf("%d %d %d", count_digit, count_cap, count_small);
    // a[0] = count_digit;
    // a[1] = count_cap;
    // a[2] = count_small;
    // return count_digit;
}

int main()
{
    char s[100]; // ab0ADC343
    scanf("%s", &s);
    int count_digit = 0, count_small = 0, count_cap = 0;

    // int res = count_digit(s);
    // printf("%d", res);

    // int arr[3];
    // printf("%d %d %d", arr[0], arr[1], arr[2]);

    count_digit_small_cap(s, &count_digit, &count_cap, &count_small);
    printf("%d %d %d", count_digit, count_cap, count_small);
    return 0;
}