#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;

    s.insert(40);
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    for (auto it : s)
    {
        cout << it << endl;
    }
}