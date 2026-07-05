#include <bits/stdc++.h>
using namespace std;
int *add;
void fun()
{
    add = new int[5];
    *add = 5;
    *(add + 1) = 10;
    *(add + 2) = 100;
    *(add + 3) = 90;
    *(add + 4) = 50;
}
// // int *add;
// int *fun()
// {
//     int *add = new int;
//     *add = 200;
//     return add;
// }
int main()
{
    // static array
    // data_type variable_name[size];
    int arr[5] = {1, 2, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // dynamic array declaration
    // int *add = new int[5];
    // *add = 5;
    // *(add + 1) = 10;
    // *(add + 2) = 100;
    // *(add + 3) = 90;
    // *(add + 4) = 50;
    fun();
    for (int i = 0; i < 5; i++)
    {
        // cout << add[i] << " ";
        cout << *(add + i) << " ";
    }
    cout << endl;

    // add = address
    // *add = pointer/dereference or value access
    // *add = 20;
    // fun();
    // cout << *add << endl;

    return 0;
}