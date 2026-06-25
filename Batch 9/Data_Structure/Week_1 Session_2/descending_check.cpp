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

    vector<int> sorted_v(v);
    // TC -> O(N * log N)
    sort(sorted_v.begin(), sorted_v.end(), greater<int>()); // descending sort

    // TC -> O(N)
    for (int i = 0; i < n; i++)
    {

        if (v[i] != sorted_v[i])
        {
            // cout << "Duplicate found" << endl;
            cout << "Not Descending sorted array" << endl;
            return 0;
        }
    }
    cout << "Descending sorted" << endl;
    return 0;
}