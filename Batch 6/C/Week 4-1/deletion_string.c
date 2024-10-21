#include <stdio.h>

int main()
{

    char word[8];

    scanf("%s", word);

    for (int i = 3; i <= 6; i++)
    {
        word[i] = word[i + 1];
    }

    printf("%s", word);
}