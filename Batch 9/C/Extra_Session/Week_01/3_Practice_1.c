#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("Even\n");
    } else if (x % 2 == 1) {
        printf("Odd\n");
    } 
    
    if (x > 0) {
        printf("positive\n");
    } else if (x < 0) {
        printf("negative\n");
    } else {
        printf("none");
    }

    return 0;
}