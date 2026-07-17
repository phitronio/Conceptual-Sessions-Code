#include <bits/stdc++.h>
using namespace std;

// void left_to_right(){

// }
// void right_to_left(){

// }

void forward_backword(list<int> l)
{
    // for (int a : l)
    // {
    //     cout << a << endl;
    // }
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // l.reverse();
    // for (int a : l)
    // {
    //     cout << a << endl;
    // }
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

main()
{
    list<int> lst;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x < 0 || x > lst.size())
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            // head insert
            lst.push_front(v);
            // print L->R & R->L
            forward_backword(lst);
        }
        else if (x == lst.size())
        {
            // tail insert
            lst.push_back(v);
            // print L->R & R->L
            forward_backword(lst);
        }
        else
        {
            auto it = next(lst.begin(), x);
            lst.insert(it, v);
            // print L->R & R->L
            forward_backword(lst);
        }
    }
    return 0;
}