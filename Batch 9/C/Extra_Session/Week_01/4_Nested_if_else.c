#include<stdio.h>
int main()
{
    int taka, coxbazar, saint;
    scanf("%d %d %d", &taka, &coxbazar, &saint);

    if (taka >= coxbazar) {
        printf("Ami cox's bazar jabo.");

        int bakiTaka = taka - coxbazar;

        if (bakiTaka >= saint) {
            printf("Saint martin o jabo");
        } else {
            printf("shopping korbo cox's bazare");
        }



    } else {
        printf("Baritei thakbo. Taka nai");


    }



    return 0;
}