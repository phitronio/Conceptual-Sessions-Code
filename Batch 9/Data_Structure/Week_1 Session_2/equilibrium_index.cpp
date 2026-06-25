#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // SC -> O(n)

    // TC -> O(N)
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // TC -> O(N*N)
    for (int i = 0; i < n; i++)
    {
        int index = i;
        int sum_pre = 0, sum_post = 0;
        for (int j = 0; j < index; j++)
        {
            sum_pre += v[j];
        }
        for (int j = index + 1; j < n; j++)
        {
            sum_post += v[j];
        }
        // cout << sum_pre << " " << sum_post << endl;
        if (sum_pre == sum_post)
        {
            cout << index << endl;
            break;
        }
    }

    return 0;
}