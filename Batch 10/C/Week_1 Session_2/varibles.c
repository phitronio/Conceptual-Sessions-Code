#include <stdio.h>

int main()
{
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d %lld %f %c", &a, &b, &c, &d);
    printf("%d\n%lld\n%.2f\n%c\n", a, b, c, d);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int A;
//     long long int B;
//     float C;
//     char D;

//     // 100
//     // 1234567891234567
//     // 23.5675(enter)
//     // A

//     scanf("%d", &A);
//     scanf("%lld", &B);
//     scanf("%f", &C);
//     // scanf("%c", &D);
//     // scanf("%c%c", &D, &D);
//     // scanf("\n%c", &D);
//     // scanf(" %c", &D);
//     getchar();
//     scanf("%c", &D);

//     printf("%d\n", A);
//     printf("%lld\n", B);
//     printf("%.2f\n", C);
//     printf("%c\n", D);

//     return 0;
// }