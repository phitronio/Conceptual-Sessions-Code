#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {10, 20, 30, 40};

    // cout << &arr[0] << endl;

    // cout << arr << endl;

    *(arr + 0) = 100; // arr[0] ;

    *(arr + 1) = 200; // arr[1] ;

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
}