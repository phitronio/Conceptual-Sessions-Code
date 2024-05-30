#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    int r=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            r++;
        }
        else
        {
            k++;
        }
    }
    if(r>k)
    {
        printf("Rahim\n");
    }
    else if(r<k)
    {
        printf("Karim\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}