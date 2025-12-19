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
    int n;    // SC = O(1)
    cin >> n; // TC = O(1)
    // int arr[n];
    vector<int> v(n);           // SC = O(n)
    for (int i = 0; i < n; i++) // TC = O(n)
    {
        cin >> v[i];
    }

    // suffix sum
    vector<int> ss(n); // SC = O(N)
    ss[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) // TC = O(N)
    {
        ss[i] = ss[i + 1] + v[i];
    }

    for (int i = 0; i < n; i++) // TC = O(n)
    {
        cout << ss[i] << " ";
    }
    return 0;
}