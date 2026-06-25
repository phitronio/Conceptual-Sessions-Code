#include <bits/stdc++.h>
using namespace std;
// TC -> O(N * log N)
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // TC -> O(N * log N)
    sort(v.begin(), v.end()); // ascending sort

    // TC -> O(N)
    // for (int i = 0; i < n - 1; i++)
    for (int i = 1; i < n; i++)
    {
        // if (v[i] == v[i + 1])
        if (v[i] == v[i - 1])
        {
            cout << "Duplicate found" << endl;
            return 0;
        }
    }
    cout << "Duplicate element not present" << endl;
    return 0;
}