/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // ascending sort

    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "Duplicate present" << endl;
            // return 0;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "All Unique value" << endl;
    return 0;
}