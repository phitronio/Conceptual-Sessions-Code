#include <stdio.h>
int main()
{
    printf("I Love%%Practice adfada\n"); 
    // \ -> escape sequence

    return 0;
}


#include <stdio.h>
int main()
{
    int a;
    char c;
    scanf("%d %c", &a,&c); // enter , space
    // getchar();
    // scanf("%c", &c);

    printf("%d\n", a);
    printf("%c\n", c);

    return 0;
}