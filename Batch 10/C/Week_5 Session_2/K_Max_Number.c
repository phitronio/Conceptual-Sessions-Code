#include <stdio.h>
#include<limits.h>

// solve using recursion
int max_find(int arr[], int n, int i){
    // recursion
    // base case -> stop the recursion call
    // if(i==n){
    //     // return 0; // wrong output when all negative
    //     return INT_MIN;
    // }
    if(i==n-1){
        // return arr[n-1];
        return arr[i];
    }
    // recursive call
    int tem_max = max_find(arr, n, i+1);

    if(tem_max>arr[i]){
        return tem_max;
    }
    else{
        return arr[i];
    }

    // int max_val = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]>max_val){
    //         max_val=arr[i];
    //     }
    // }
    // printf("%d", max_val);
    // return max_val;
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

    
    printf("%d", max_find(arr, n, 0));
    return 0;
}