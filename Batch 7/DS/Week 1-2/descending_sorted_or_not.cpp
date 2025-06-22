#include <iostream>
#include <vector>
#include <algorithm>

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

    // O(n) = 10^5
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < v[i + 1]) // descending order mismatch
        {
            flag = 1;
            break;
        }
    }

    // O(1)
    if (flag == 0)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
    return 0;
}