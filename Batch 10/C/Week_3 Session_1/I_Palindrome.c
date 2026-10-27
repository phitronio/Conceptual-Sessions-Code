#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", &str);

    int len = strlen(str);


    int flag = 1;

    int left = 0, right = len - 1;

    while(left < right)
    {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}