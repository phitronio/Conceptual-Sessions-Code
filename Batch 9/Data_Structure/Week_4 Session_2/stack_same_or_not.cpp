#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        if (l.empty())
        {
            return;
        }
        else
        {
            l.pop_back();
        }
    }
    int top()
    {
        if (l.empty())
        {
            return -1;
        }
        else
        {
            return l.back();
        }
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    // list<int>l;
    MyStack st1, st2;
    int n;
    cin >> n;
    int v;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        st1.push(v);
    }

    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> v;
        st2.push(v);
    }

    // while (!st1.empty())
    // {
    //     cout << st1.top() << endl;
    //     st1.pop();
    // }
    // cout << endl;
    // while (!st2.empty())
    // {
    //     cout << st2.top() << endl;
    //     st2.pop();
    // }

    // size of stack
    if (st1.size() == st2.size())
    {
        //  1 - n
        // 1 - m
        // while (!st1.empty())
        // while (!st1.empty() && !st2.empty())

        bool flag = true; // true means same
        // for (int i = 1; i <= n; i++)
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
            cout << "Two stack are same!!" << endl;
        }
        else
        {
            cout << "Two stack are not same!!" << endl;
        }
    }
    else
    {
        cout << "Two stack are not same!!" << endl;
    }
    return 0;
}