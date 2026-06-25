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

    // TC -> O(n)
    vector<int> suf(n);
    suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << suf[i] << endl;
    }
    return 0;
}