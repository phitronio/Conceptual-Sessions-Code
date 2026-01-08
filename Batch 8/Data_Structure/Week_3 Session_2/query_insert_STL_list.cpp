
#include <bits/stdc++.h>
using namespace std;

// void print_forwar_backwar(list<int> &lst)
void print_forwar_backwar(list<int> lst)
{
    // forward & backward print
    for (int v : lst)
    {
        cout << v << " ";
    }
    cout << endl;

    lst.reverse();
    // list<int> cpy_lst = lst;
    // cpy_lst.reverse();
    // for (int v : cpy_lst)
    for (int v : lst)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst;
    int query;
    cin >> query;
    while (query--)
    {
        int idx, val;
        cin >> idx >> val;
        int sz = lst.size();

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            // head insert
            lst.push_front(val);
            // forward & backward print
            print_forwar_backwar(lst);
        }
        else if (idx == sz)
        {
            // tail insert
            lst.push_back(val);
            // forward & backward print
            print_forwar_backwar(lst);
        }
        else
        {
            // insert at any pos
            auto it = next(lst.begin(), idx);
            lst.insert(it, val);
            // forward & backward print
            print_forwar_backwar(lst);
        }
    }
    return 0;
}