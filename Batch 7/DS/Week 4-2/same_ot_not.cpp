#include <bits/stdc++.h>
using namespace std;

class Mystack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int size()
    {
        return l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    Mystack st1, st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        st1.push(value);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        st2.push(value);
    }

    // print st1
    // while (!st1.empty())
    // {
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }
    // cout << endl;
    // print st2
    // while (!st2.empty())
    // {
    //     cout << st2.top() << " ";
    //     st2.pop();
    // }

    if (st1.size() != st1.size())
    {
        cout << "Not same" << endl;
    }
    else
    {
        bool flag = true;
        while (!st1.empty() && !st2.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if (flag == true)
        {
            cout << "Same" << endl;
        }
        else
        {
            cout << "Not same" << endl;
        }
    }

    return 0;
}