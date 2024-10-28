#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+5];
    scanf("%s",s);

    int freq[26] = {0};
    for(int i=0;i<n;i++)
    {
        int index = s[i] - 'a';
        freq[ index ]++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i] != 0)
            printf("%c %d\n", i+'a', freq[i]);
    }
    return 0;
}