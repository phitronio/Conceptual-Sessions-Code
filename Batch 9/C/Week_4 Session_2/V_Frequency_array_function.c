#include <stdio.h>
int n, m;
void freq_count(int arr[], int s_arr)
{
    int freq[m + 1]; // 1->m
    for (int i = 0; i <= m; i++)
    {
        freq[i] = 0;
        // *(freq+i) = 0;
    }

    for (int i = 0; i < s_arr; i++)
    {
        int val = arr[i];
        freq[val]++; // original freq array
    }

    // freq print
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }
}

int main()
{
    // int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // count frequency
    // int freq[m + 1] = {0}; // variable lenght so 0 assign not possible
    // int freq[m + 1]; // 1->m

    freq_count(arr, n);

    return 0;
}