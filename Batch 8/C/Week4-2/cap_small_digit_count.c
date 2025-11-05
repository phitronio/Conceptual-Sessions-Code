#include <stdio.h>
int main()
{
    char str[100005];
    scanf("%s", str);
    // printf("%s", str);

    int cnt_cap = 0, cnt_small = 0, cnt_dig = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ('a' <= ch && ch <= 'z')
        {
            // small
            cnt_small++;
        }
        else if ('A' <= ch && ch <= 'Z')
        {
            // capital
            cnt_cap++;
        }
        else if ('0' <= ch && ch <= '9')
        {
            // digit
            cnt_dig++;
        }
    }
    printf("%d %d %d\n", cnt_cap, cnt_small, cnt_dig);

    return 0;
}