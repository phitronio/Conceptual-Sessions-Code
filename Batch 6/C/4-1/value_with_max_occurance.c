#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int freq[100005] = {0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }

    int val = -1;
    int mx = -1;

    for(int i=0;i<100005;i++)
    {
        if(freq[i] > mx)
        {
            mx = freq[i];
            val = i;
        }
    }
    printf("%d -> %d",val,mx);
    return 0;
}