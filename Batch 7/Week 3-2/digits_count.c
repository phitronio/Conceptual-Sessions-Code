#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", &s);
    int count_digit = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // count digit
        // '0' = 48 , '9'=57
        if (s[i] >= '0' && s[i] <= '9')
        {
            // digit
            count_digit++;
        }
    }
    printf("%d", count_digit);
    return 0;
}