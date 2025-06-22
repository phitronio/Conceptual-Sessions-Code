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
    // int flag = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (v[i] < v[i + 1]) // descending order mismatch
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // O(1)
    // if (flag == 0)
    // {
    //     cout << "Sorted" << endl;
    // }
    // else
    // {
    //     cout << "Not sorted" << endl;
    // }

    // // O(n*log n)
    vector<int> copy_v(v);                              // O(n)
    sort(copy_v.begin(), copy_v.end(), greater<int>()); // O(n*log n)

    int is_des_sorted = 1;
    for (int i = 0; i < n; i++)
    {
        if (copy_v[i] != v[i])
        {
            is_des_sorted = 0;
            break;
        }
    }

    // O(1)
    if (is_des_sorted == 1)
    {
        cout << "Descending Sorted" << endl;
    }
    else
    {
        cout << "Not Descending sorted" << endl;
    }
    return 0;
}