#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    // printf("%d", taka);

    // if (taka >= 370) {
    //     printf("kacchi khabo\n");
    // } else if (taka >= 100) {
    //     printf("sandwich khabo\n");
    // }

    if (taka <= 10) {
        printf("chips khabo\n");
    } else if (taka <= 50) {
        printf("Coke khabo\n");
    } else if (taka <= 200) {
        printf("Burger khabo\n");
    } else {
        printf("kacchi khabo\n");
    }



    if (taka > 10) {
        printf("10 taka\n");
    }

    if (taka > 20) {
        printf("20 taka\n");
    }


    if (taka > 30) {
        printf("100 taka\n");
    }

    printf("program ekhane sesh\n");
    return 0;
}