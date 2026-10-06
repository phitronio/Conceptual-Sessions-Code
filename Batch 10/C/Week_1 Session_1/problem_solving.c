#include<stdio.h>
int main()
{

// check if a number is even or odd
// if odd then check if it's divisible by 3
// if even then check if it's divisilbe by 6
    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {

        printf("number is even\n");
        if ( a % 6 == 0) {
            printf("6 diye vag kora jay\n");
            int b;
            scanf("%d", &b);
            printf("%d", b);
        } else {
            printf("6 diye vag kora jay na\n");
        }


    } else {
        printf("number is odd\n");

        if (a % 3 == 0) {
            printf("3 diye vag kora jay\n");
        } else {
            printf("3 diye vag kora jay nahh");
        }
    }
    

    // if (a % 2 == 0) {
    //     printf("number is even\n");
    // } else if (a % 2 == 1) {
    //     printf("number is odd\n");
    // }
    // printf("%d", a);



    return 0;
}