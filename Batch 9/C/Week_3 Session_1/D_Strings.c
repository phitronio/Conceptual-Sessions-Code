#include<stdio.h>
#include<string.h>
int main()
{
    char A[11], B[11];

    scanf("%s %s", &A, &B);

    // printf("%s %s", A, B);

    int alen = strlen(A);
    int blen = strlen(B);

    printf("%d %d\n", alen, blen);
    printf("%s%s\n", A,B);

    char ach = A[0];
    char bch = B[0];

    A[0] = bch;
    B[0] = ach;
    printf("%s %s", A, B);



    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D