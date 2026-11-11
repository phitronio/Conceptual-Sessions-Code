#include <stdio.h>
#include<limits.h>

// solve using function
int max_find(int arr[], int n){
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    // printf("%d", max_val);
    return max_val;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // max element find
    // int max_val = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]>max_val){
    //         max_val=arr[i];
    //     }
    // }
    // print max element
    // printf("%d", max_val);

    
    printf("%d", max_find(arr, n));
    return 0;
}