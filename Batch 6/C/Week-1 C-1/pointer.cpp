#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;

    cout << &a << endl; // a er address print korbe

    int *a_ptr = &a; // ekhane a er address ta k rakhlam

    cout << a_ptr << endl; // a er address ta print korbe

    cout << "before deferencing" << endl;

    cout << a << endl;

    *a_ptr = 15;

    cout << "after deferencing" << endl;

    cout << a << endl;

    cout << *a_ptr << endl;

    // a ar *a_ptr same jinish
}