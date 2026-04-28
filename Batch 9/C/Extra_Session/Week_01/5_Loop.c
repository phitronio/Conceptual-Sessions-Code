#include<stdio.h>
int main()
{
    // for loop er syntax
    // for(int i = 1; i <= 5; i++)
    // {
    //     printf("Aj ami druto ghumiye jabo\n");
    // }

    // printf("--------------\n");
    int x = 1;
    while( x <= 5)
    {
        printf("hello\n");
        x++;
    }
    printf("--------------\n");

    int Amartaka = 1000;

    while( Amartaka % 2 == 0) {
        int dibo = Amartaka / 2;
        Amartaka = Amartaka - dibo;
        printf("%d\n", dibo);
    }


    return 0;
}