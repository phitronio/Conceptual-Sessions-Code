#include <stdio.h>

int pos_neg_zero(int num)
{
    if (num > 0)
    {
        return 1; // 1 means positive
    }
    else if (num < 0)
    {
        return -1; // -1 means negative
    }
    else
    {
        return 0; // 0 means zero
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int result = pos_neg_zero(num);
    if (result == 1) // 1 means positive
    {
        printf("positive\n");
    }
    else if (result == -1) // -1 means negative
    {
        printf("negative\n");
    }
    else if (result == 0) // 0 means zero
    {
        printf("zero\n");
    }
    return 0;
}

/*
input:
0
output:
zero

input:
5
output:
positive

input:
-3
output:
negative
*/