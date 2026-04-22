/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt_even = 0, cnt_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cnt_even++;
        else
            cnt_odd++;
    }
    printf("Even numbers: %d\n", cnt_even);
    printf("Odd numbers: %d\n", cnt_odd);

    return 0;
}