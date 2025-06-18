#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}