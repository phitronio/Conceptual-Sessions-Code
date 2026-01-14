/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    list<int> l;
    void push(int val)
    {
        // if(l.size()>=100000){
        //     return;
        // }
        l.push_back(val);
    }
    void pop()
    {
        if (!l.empty())
        {
            l.pop_back();
        }
    }
    int top()
    {
        if (!l.empty())
        {
            return l.back();
        }
        return -1; // or throw an exception
    }
    int size()
    {
        return l.size();
    }
    bool isEmpty()
    {
        return l.empty();
    }
};

int main()
{
    Stack st1, st2;
    // Stack2 s2;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    if (n != m)
    {
        cout << "Not Same" << endl;
    }
    else
    {
        bool flag = true;
        // while (st1.size() > 0 && st2.size() > 0)
        // while (st1.isEmpty() == false && st2.isEmpty() == false)
        // while (!st1.isEmpty() && !st2.isEmpty()) // true means loop cholbe
        while (n--)
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if (flag)
        {
            cout << "Same" << endl;
        }
        else
        {
            cout << "Not Same" << endl;
        }
    }
    return 0;
}