#include <bits/stdc++.h>
using namespace std;

int main()
{

    // set < data_type> name ;

    set<string> name;

    int n;
    cin >> n;

    // insertion : set_name.insert() ;

    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;
        name.insert(s);
    }

    for (auto it : name)
    {
        cout << it << " ";
    }
    cout << endl;
}