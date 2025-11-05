#include <stdio.h>

// int n, m;
// int arr[100005];     // main array
// int fre[100005]={0}; // frequency array - count

// no return, parameter
void array_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// no return, parameter
void freq_cal(int fre[], int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        fre[val]++;
    }
}

//
void print_fre(int fre[], int m)
{
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fre[i]);
    }
}
//
void fre_all_zero(int fre[], int m)
{
    for (int i = 0; i <= m; i++)
    {
        fre[i] = 0;
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];     // main array
    int fre[m + 1]; // frequency array - count

    // frequency array all value set as 0
    fre_all_zero(fre, m);

    // array input in function
    array_input(arr, n);

    // frequency calculate in function
    freq_cal(fre, arr, n);

    // frequency print
    print_fre(fre, m);
    return 0;
}