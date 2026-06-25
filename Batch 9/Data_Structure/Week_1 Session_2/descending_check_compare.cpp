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

    // TC -> O(N)
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            cout << "Not descending sorted" << endl;
            return 0;
        }
    }
    cout << "descending sorted" << endl;
    return 0;
}