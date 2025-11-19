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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    // cout << i << " " << j << " " << k << " " << l << endl;
                    int sum = a[i] + a[j] + a[k] + a[l];
                    if (sum == target)
                    {
                        flag = 1;
                    }
                }
            }
        }
    }
    if (flag)
    {
        cout << "Target matchted\n";
    }
    else
    {
        cout << "Target Not matchted\n";
    }
    return 0;
}