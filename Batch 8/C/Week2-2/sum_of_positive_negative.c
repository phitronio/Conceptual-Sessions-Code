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

    int pos_sum = 0, neg_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos_sum += arr[i];
        }
        if (arr[i] < 0)
        {
            neg_sum += arr[i];
        }
    }
    printf("%d %d", pos_sum, neg_sum);
    return 0;
}

/*
input:
11
-5 -4 -3 -2 -1 0 1 2 3 4 5
output:
15 -15
*/
