#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int left = 0, right = n - 1;

    int sob_mil = 1;
    while(left < right)
    {
        if (arr[left] != arr[right]) {
            sob_mil = 0;
            break;
        }
        left++;
        right--;
    }

    if (sob_mil == 0) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G - Array