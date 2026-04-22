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
    // int cnt_even = 0, cnt_odd = 0;
    int cnt_num[10] = {0}; // frequency array
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        cnt_num[val]++;
    }

    for (int idx = 0; idx < 10; idx++)
    {
        printf("%d -> %d\n", idx, cnt_num[idx]);
    }

    return 0;
}