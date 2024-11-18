#include <bits/stdc++.h>
using namespace std;

// create an array in a function
// initialize its values
// return the array to the main function
// print the array

int *func()
{
    int ar[5];

    for (int i = 0; i < 5; i++)
    {
        ar[i] = i + 1;
    }

    return ar;
}

int main()
{

    int *arr = func();

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}