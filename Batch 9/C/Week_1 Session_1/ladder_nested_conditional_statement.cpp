#include <stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark > 32)
    {
        printf("Pass the examination\n");
        if (mark > 100)
        {
            printf("Invalid input");
        }
        else if (mark >= 80 && mark <= 100)
        {
            printf("A+");
        }
        else if (mark >= 70 && mark < 80)
        {
            if (mark >= 75)
            {
                printf("A");
            }
            else
            {
                printf("A-");
            }
        }
        else if (mark >= 60)
        {
            printf("B");
        }
        else if (mark >= 50)
        {
            printf("C");
        }
        else if (mark >= 40)
        {
            printf("D");
        }
        else if (mark >= 33)
        {
            printf("E");
        }
    }
    else
    {
        printf("Fail in Examination");
    }
    return 0;
}