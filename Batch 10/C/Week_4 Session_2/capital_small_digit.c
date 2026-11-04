#include <stdio.h>

// function cap_small_dig(str){
// }

int main()
{
    char str[100];
    scanf("%s", str);
    int cnt_cap = 0, cnt_small = 0, cnt_digit = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cnt_cap++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            cnt_small++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            cnt_digit++;
        }
    }
    printf("Capital letters: %d\n", cnt_cap);
    printf("Small letters: %d\n", cnt_small);
    printf("Digits: %d\n", cnt_digit);
    return 0;
}