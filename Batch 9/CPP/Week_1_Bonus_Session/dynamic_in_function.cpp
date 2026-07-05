#include <bits/stdc++.h>
using namespace std;
int *add;
void fun()
{
    add = new int;
    *add = 200;
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
    // static variable
    // data_type variable_name = value;
    int a = 10;
    cout << a << endl;

    // dynamic declaration
    // int *add = new int;
    // add = address
    // *add = pointer/dereference or value access
    // *add = 20;
    fun();
    cout << *add << endl;

    return 0;
}