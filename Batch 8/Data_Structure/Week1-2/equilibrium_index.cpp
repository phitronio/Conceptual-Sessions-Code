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

    // O(N*N) = 10^5 * 10^5 = 10^10
    for (int i = 0; i < n; i++) // O(N)
    {
        int lower_element_sum = 0, higher_element_sum = 0;
        for (int j = 0; j < i; j++) // O(N)
        {
            lower_element_sum += v[j];
        }
        for (int j = i + 1; j < n; j++) // O(N)
        {
            higher_element_sum += v[j];
        }
        // cout << i << " " << lower_element_sum << " " << higher_element_sum << endl;
        if (lower_element_sum == higher_element_sum)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}