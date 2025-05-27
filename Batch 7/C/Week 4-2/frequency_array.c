#include <stdio.h>

// void check(int n) {}; // pass by value
// check(10);

// void check(int *n) {}; // pass by reference
// int a;
// check(&a);

void fre_count(int arr[], int n, int fre[])
{
    for (int i = 1; i <= n; i++)
    {
        // frequency count
        int val = arr[i];
        fre[val]++;
    }
}

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n + 1], fre[m + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 0 set
    for (int i = 1; i <= m; i++)
    {
        fre[i] = 0;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     // frequency count
    //     int val = arr[i];
    //     fre[val]++;
    // }

    // frequency count using function
    fre_count(arr, n, fre);

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }
    return 0;
}