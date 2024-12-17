#include <bits/stdc++.h>
using namespace std;

void null_converter(int *&p)
{
    p = NULL;
}

int main()
{

    int a;
    cin >> a;

    int *p = &a;

    null_converter(p);

    if (p != NULL)
    {
        cout << *p << endl;
    }
    else
    {
        cout << "P is pointed to null" << endl;
    }
}