#include<stdio.h>
int main()
{
    int taka = 4;

    if (taka >= 5) {
        printf("rong cha\n");
    } else if (taka >= 10) {
        printf("chips");
    } else if (taka >= 20) {
        printf("Mountain dew");
    } else {
        printf("sharma\n");
    }


    if (taka >= 20) {
        printf("Pepsi");
    } else if (taka >= 10) {
        printf("honey comb");
    } else if (taka >= 5) {
        printf("cha");
    } else {
        printf("kichui khabo na");
    }

    return 0;
}