/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); // size of array
    int arr[n];      // array declaration
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x; // search value
    scanf("%d", &x);

    // print array
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] == x)
        {
            printf("%d", i); // i_th index
            // item found then break
            // break;
            return 0;
        }
        // else
        // {
        //     printf("%d", -1); // -1
        // }
    }

    // not found
    printf("%d", -1); // -1

    return 0;
}