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
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int x;
    scanf("%d", &x);
    // printf("%d", x);

    // searching x
    int idx = -1; // not found [invalid index can be idx >= 10^5 or, idx < 0 ]
    // bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            // flag = true;
            break; // multiple x handle
        }
    }
    // if(flag != false)
    if (idx != -1) // not equal to initially assign value -1
    {
        // pabo
        printf("%d", idx);
    }
    else
    {
        // pabo na
        printf("-1");
    }

    return 0;
}