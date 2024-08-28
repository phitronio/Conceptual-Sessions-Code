#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> count;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (count[name] == 0)
            cout << "OK" << endl;
        else
            cout << name << count[name] << endl;

        count[name] = count[name] + 1;
    }
}