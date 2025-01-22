#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() <= 1)
    {
        cout << "NO" << endl;
    }
    else
    {

        auto it = s.begin();
        it++;

        cout << *it << endl;
    }
}