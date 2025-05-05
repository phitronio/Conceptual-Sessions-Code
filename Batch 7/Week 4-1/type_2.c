#include <stdio.h>

// return type function_name ( parameters){
// working procedures / Instructions
//}

void printing_n_values(int n)
{
    if (n > 0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
}

int main()
{

    int N;
    scanf("%d", &N);
    printing_n_values(N);
}