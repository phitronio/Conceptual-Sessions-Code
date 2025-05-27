#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;

    cout << "a er address " << &a << endl;

    int *ptr = &a;

    cout << "pointer e store ase " << ptr << endl;

    // dereferencing

    *ptr = 100; // ptr k dereferencing kora

    cout << a << endl;
}