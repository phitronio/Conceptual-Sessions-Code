#include<stdio.h>
int main()
{
    // relational operator
    // check if a number is even or odd
    // if odd then check if it's divisible by 3
    // if even then check if it's divisilbe by 6
    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("Even\n");

        if (a % 6 == 0) {
            printf("divisible by 6");
        } else {
            printf("Not divisible by 6");
        }

    } else {
        printf("Odd\n");

        if (a % 3 == 0) {
            printf("divisible by 3");
        } else {
            printf("Not divisible by 3");
        }

    }


    return 0;
}