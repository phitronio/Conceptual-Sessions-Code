#include <bits/stdc++.h>
using namespace std;
int main()
{
    // static variable
    // data_type variable_name = value;
    int a = 10;
    cout << a << endl;

    // dynamic declaration
    int *add = new int;
    // add = address
    // *add = pointer/dereference or value access
    *add = 20;
    cout << *add << endl;

    return 0;
}