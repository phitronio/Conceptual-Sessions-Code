#include<stdio.h>
#include<string.h>

int main()
{
    int N = 1005;
    char str[N];

    scanf("%s", &str);

    int length = strlen(str);

    int flag = 1;
    int left = 0, right = length - 1;

    while(left < right)
    {
        if (str[left] != str[right]) {
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