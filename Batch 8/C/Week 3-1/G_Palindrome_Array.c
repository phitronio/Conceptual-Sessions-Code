#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int org[n];
    int copy[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &org[i]);
        copy[i] = org[i];
    }


    int left = 0, right = n-1;

    while(left < right)
    {
        int tmp = org[left];
        org[left] = org[right];
        org[right] = tmp;

        left++, right--;
    }

    int flag = 1;
    for(int i= 0; i<n; i++)
    {
        if (org[i] != copy[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("YES");
    } else {
        printf("NO");
    }


}