#include<stdio.h>
int main()
{
    
    int x;
    scanf("%d", &x);

   
    for(int i=1; i<=x; i++) {
        if (i % 2 != 0 && i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }

    // for(int i=1; i<=x; i++) {
    //     if (i % 2 != 0)
    //     {
    //         if (i % 3 == 0) {
    //             printf("%d\n", i);
    //         }
    //     }
    // }
    return 0;
}