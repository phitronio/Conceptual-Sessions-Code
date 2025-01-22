#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto it : s)
    {
        cout << it << endl;
    }
}