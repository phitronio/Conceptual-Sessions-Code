// solution - 1
/* #include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_val)
            max_val = arr[i];
    }
    printf("%d", max_val);
    return 0;
}
*/

// // solution - 2(index n-1 to 0)
// #include <stdio.h>
// #include <limits.h>
// int max_val = INT_MIN;

// // for (int i = 0; i < n; i++)
// // for (int i = n - 1; i >= 0; i--)
// // {
// //     if (arr[i] > max_val)
// //         max_val = arr[i];
// // }

// void rec(int arr[], int n)
// {
//     if (n < 0)
//     {
//         // base
//         return;
//     }
//     if (arr[n] > max_val)
//     {
//         max_val = arr[n];
//     }
//     rec(arr, n - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     // recursion call
//     rec(arr, n - 1); // 0-index based

//     printf("%d", max_val);
//     return 0;
// }

// solution - 3 (index 0 to n-1)
// #include <stdio.h>
// #include <limits.h>
// int max_val = INT_MIN;

// // for (int i = 0; i < n; i++)
// // {
// //     if (arr[i] > max_val)
// //         max_val = arr[i];
// // }

// void rec(int arr[], int n, int idx)
// {
//     if (idx == n)
//     {
//         // base
//         return;
//     }
//     if (arr[idx] > max_val)
//     {
//         max_val = arr[idx];
//     }
//     rec(arr, n, idx + 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     // recursion call
//     rec(arr, n, 0); // 0-index based

//     printf("%d", max_val);
//     return 0;
// }

// solution - 4 return type
#include <stdio.h>
#include <limits.h>

int rec(int arr[], int n, int idx)
{
    if (idx == n)
    {
        // base
        return INT_MIN;
    }
    int tem_res = rec(arr, n, idx + 1);
    if (arr[idx] > tem_res)
    {
        return arr[idx];
    }
    else
    {
        return tem_res;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // recursion call
    int res = rec(arr, n, 0); // 0-index based

    printf("%d", res);
    return 0;
}