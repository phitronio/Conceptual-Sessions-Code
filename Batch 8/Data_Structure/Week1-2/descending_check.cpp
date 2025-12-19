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

    // TC - O(N)
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
        }
        else
        {
            cout << "Not Descending order sorted" << endl;
            // return 0;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "Descending order sorted" << endl;
    return 0;
}