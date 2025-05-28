#include <iostream>
#include <algorithm>
using namespace std;
int n;

int *sort_fun()
{
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort accending order
    sort(arr, arr + n);
    return arr;
}

int main()
{
    int *return_arr = sort_fun();
    for (int i = 0; i < n; i++)
    {
        cout << return_arr[i] << " ";
    }
    delete[] return_arr;
    return 0;
}