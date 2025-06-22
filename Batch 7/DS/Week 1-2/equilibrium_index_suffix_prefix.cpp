#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // prefix sum - O(n)
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // o(n)
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;

    // suffix sum - O(n)
    vector<int> suf(n);
    suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cout << suf[i] << " ";
    }
    cout << endl;

    // check suffix sum and prefix sum equal
    // O(n)
    for (int i = 0; i < n; i++)
    {
        if (suf[i] == pre[i])
        {
            cout << i << " ";
            break;
        }
    }

    return 0;
}