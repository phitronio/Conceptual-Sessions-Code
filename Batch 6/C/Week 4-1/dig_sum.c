#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    char num[n + 1];

    scanf("%s", num);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int dig = num[i] - '0'; // ascii er maan ta delete kore
        sum = sum + dig;
    }

    printf("%d", sum);
}