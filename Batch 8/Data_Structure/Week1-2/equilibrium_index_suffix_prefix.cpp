/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // SC - O(1)
    cin >> n;
    vector<int> v; // Space Com: O(N)
    // O(N)
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // prefix sum
    vector<int> ps(n); // SC = O(N)
    ps[0] = v[0];
    for (int i = 1; i < n; i++) // TC = O(N)
    {
        ps[i] = ps[i - 1] + v[i];
    }

    // for (int i = 0; i < n; i++) // TC = O(n)
    // {
    //     cout << ps[i] << " ";
    // }
    // cout << endl;

    // suffix sum
    vector<int> ss(n); // SC = O(N)
    ss[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) // TC = O(N)
    {
        ss[i] = ss[i + 1] + v[i];
    }

    // for (int i = 0; i < n; i++) // TC = O(n)
    // {
    //     cout << ss[i] << " ";
    // }
    // cout << endl;

    // TC - O(N)
    for (int i = 0; i < n; i++)
    {
        if (ps[i] == ss[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}