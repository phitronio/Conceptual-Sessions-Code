#include<stdio.h>
#include<string.h>
int main()
{
    char A[11];
    char B[11];

    scanf("%s %s", &A, &B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", A,B);

    char chA = A[0];
    char chB = B[0];

    A[0] = chB;
    B[0] = chA;

    printf("%s %s", A, B);




    // printf("%s %s", A, B);

    return 0;
}