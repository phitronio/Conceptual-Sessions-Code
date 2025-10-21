#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int flag = 1;

    int left = 0, right = n-1;

    while(left <= right)
    {
        if (arr[left] != arr[right]) {
            flag = 0;
            break;
        }
        left++, right--;
    }

    if (flag == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
}