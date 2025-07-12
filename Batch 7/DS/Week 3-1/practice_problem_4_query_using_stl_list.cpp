#include <bits/stdc++.h>
using namespace std;

void print_list_forward(list<int> &l)
{
    // for(auto it=l.begin(); it!=l.end();it++){

    // }
    // for (auto it : l)
    for (int elem : l)
    {
        cout << elem << " ";
    }
    cout << endl;
}

void print_list_backward(list<int> l)
{
    l.reverse();
    for (int elem : l)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;

    list<int> l;

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        // int sz = count_size(head);
        int sz = l.size();
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            // continue;
        }
        else if (idx == 0)
        { // insert head
            // insert_at_head(head, tail, val);
            // print_list_forward(head);
            // print_list_backward(tail);
            l.push_front(val);
            print_list_forward(l);
            print_list_backward(l);
        }
        else if (idx == sz)
        { // tail insert
            // insert_at_tail(head, tail, val);
            // print_list_forward(head);
            // print_list_backward(tail);
            l.push_back(val);
            print_list_forward(l);
            print_list_backward(l);
        }
        else
        {
            // insert_at_any_pos(head, tail, idx, val);
            auto it = next(l.begin(), idx);
            l.insert(it, val);
            print_list_forward(l);
            print_list_backward(l);
        }
    }

    return 0;
}