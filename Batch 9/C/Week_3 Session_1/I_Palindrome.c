#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];

    scanf("%s", &str);

    int len = strlen(str);

    // printf("%d", len);

    int left = 0, right = len - 1;
    int flag = 0;

    while(left < right)
    {
        if (str[left] != str[right]) {
            flag = 1;
            break;
        }
        left++;
        right--;
    }

    if (flag == 1) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;

}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I - String