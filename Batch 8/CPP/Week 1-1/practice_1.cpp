#include <bits/stdc++.h>

using namespace std;

int *fun(int n)
{
    int *arr = new int[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    return arr;
}
int main()
{
    int n;
    cin >> n;
    int* mainArr = fun(n);

    for(int i=0; i<n; i++) {
        cout<<mainArr[i]<<" ";
    }
    return 0;
}