// main solution
// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);

//     if (num > 0)
//     {
//         printf("Positive");
//     }

//     if (num < 0)
//     {
//         printf("Negative");
//     }

//     if (num == 0)
//     {
//         printf("Zero");
//     }
//     return 0;
// }

#include <stdio.h>

int check_num(int num)
{
    // return;
    if (num > 0)
    {
        // printf("Positive");
        // return "Positive" // limitation
        return 1;
    }

    if (num < 0)
    {
        // printf("Negative");
        return -1;
    }

    if (num == 0)
    {
        // printf("Zero");
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int tem = check_num(num);

    // print("%d", 1/0); // code exited so return 1

    if (tem == 1)
    {
        printf("Positive");
    }
    else if (tem == -1)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}


// return