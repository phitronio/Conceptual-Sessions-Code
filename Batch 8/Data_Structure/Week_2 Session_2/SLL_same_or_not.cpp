#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    // SLL 1
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    // SLL 2
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (cin >> val2)
    {
        if (val2 == -1)
            break;
        insert_at_tail(head2, tail2, val2);
    }

    // size SLL 1
    Node *temp = head1;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    cout << sz << endl;

    // size SLL 2
    Node *temp2 = head2;
    int sz2 = 0;
    while (temp2 != NULL)
    {
        sz2++;
        temp2 = temp2->next;
    }
    cout << sz2 << endl;

    if(sz != sz2)
    {
        cout << "Not Same - directly size mismatch" << endl;
        return 0;
    }

    // compare both SLL
    Node *a = head1;
    Node *b = head2;
    while(a != NULL && b != NULL)
    {
        if(a->val != b->val)
        {
            cout << "Not Same" << endl;
            return 0;
        }
        a = a->next;
        b = b->next;
    }
    cout << "Same" << endl;
    return 0;
}