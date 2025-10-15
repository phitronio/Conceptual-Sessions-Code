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

    int flag = 0; // 0 means item not present

    // print array
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] == x)
        {
            printf("%d", i); // i_th index
            // item found then break
            // break;
            // return 0;
            flag = 1e9; // found target item
            break;
        }
        // else
        // {
        //     printf("%d", -1); // -1
        // }
    }

    // not found
    if (flag == 0)
    {
        printf("%d", -1); // -1
    }

    return 0;
}