#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

class MaxHeap
{
public:
    vector<int> v;

    MaxHeap()
    {
    }

    void push(int val)
    {
        v.push_back(val);

        int crntIdx = v.size() - 1;

        while (crntIdx != 0)
        {
            int parentIdx = (crntIdx - 1) / 2;

            if (v[parentIdx] < v[crntIdx])
            {
                swap(v[parentIdx], v[crntIdx]);
                crntIdx = parentIdx;
            }
            else
            {
                break;
            }
        }
    }

    void printHeap()
    {
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    bool empty()
    {
        return v.empty();
    }

    int size()
    {
        return v.size();
    }

    int top()
    {
        return v.front();
    }

    void pop()
    {
        v[0] = v.back();
        v.pop_back();

        int crntIdx = 0;
        int lastIdx = v.size() - 1;

        while (true)
        {
            int left_idx = (crntIdx * 2) + 1;
            int right_idx = (crntIdx * 2) + 2;

            if (left_idx <= lastIdx && right_idx > lastIdx)
            {
                // only left child exist
                if (v[left_idx] > v[crntIdx])
                {
                    swap(v[left_idx], v[crntIdx]);
                    crntIdx = left_idx;
                }
                else
                {
                    break;
                }
            }
            else if (left_idx <= lastIdx && right_idx <= lastIdx)
            {
                // both left and right child exist.

                if (v[left_idx] >= v[right_idx] && v[left_idx] > v[crntIdx])
                {
                    swap(v[left_idx], v[crntIdx]);
                    crntIdx = left_idx;
                }
                else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[crntIdx])
                {
                    swap(v[right_idx], v[crntIdx]);
                    crntIdx = right_idx;
                }
                else
                {
                    break;
                }
            }
            else
            {
                // no child
                break;
            }
        }
    }
};

int main()
{
    fastIO();
    MaxHeap mhp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mhp.push(val);
    }

    //  mhp.printHeap();
    //  mhp.pop();
    //  mhp.printHeap();
    //  mhp.pop();
    //  mhp.printHeap();
    //  mhp.pop();
    //  mhp.printHeap();

    cout << mhp.top() << endl;
    if (!mhp.empty())
    {
        mhp.pop();
        cout << mhp.top() << endl;
    }
    if (!mhp.empty())
    {
        mhp.pop();
        cout << mhp.top() << endl;
    }
    if (!mhp.empty())
    {
        mhp.pop();
        cout << mhp.top() << endl;
    }

    return 0;
}
