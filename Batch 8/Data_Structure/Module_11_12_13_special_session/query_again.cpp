/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    Node *H = NULL;
    Node *T = NULL;

    int query;
    cin >> query;
    while (query)
    {
        int idx, val;
        cin >> idx >> val;
        int sz = list_size();
        if (idx < 0 || idx > sz)
        {
            // Invalid print
        }
        else
        {
            // head insert -> idx 0
            if (idx == 0)
            {
                // insert at head
            }
            // tail insert
            else if (idx == sz)
            {
                // insert at tail
            }
            // any position insert
            else
            {
                // insert at any position
            }

            // left to right print

            // right to left print
            Node *temp = T;
            cout << "R -> ";
            while (T->next != NULL)
            {
                cout << temp->val;
                temp = temp->prev;
            }
        }
    }
    return 0;
}
