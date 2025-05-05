#include <stdio.h>

// return type function_name ( parameters){
// working procedures / Instructions

//}

int summation_of_first_last_digit(int n)
{

    int last_digit = n % 10;
    int first_digit = n / 1000;

    int sum = first_digit + last_digit;

    return sum;
}

int main()
{

    int N;
    scanf("%d", &N);

    int ans = summation_of_first_last_digit(N);

    printf("%d", ans);
}