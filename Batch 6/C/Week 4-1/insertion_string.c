#include <stdio.h>

int main()
{

    char word[8];

    scanf("%s", word);

    for (int i = 6; i >= 2; i--)
    {
        word[i + 1] = word[i];
    }

    word[2] = 'c';

    printf("%s", word);
}

// 2 number index e c insert korte hobe