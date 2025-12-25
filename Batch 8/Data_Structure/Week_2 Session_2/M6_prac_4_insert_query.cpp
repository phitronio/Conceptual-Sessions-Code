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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

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

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *newnode = new Node(val);

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next; // first step
    tmp->next = newnode;       // second step
}

int size_of_sll(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void print_sll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    int query;
    cin >> query;
    while (query--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = size_of_sll(head1); // updated size

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            // cout << "Valid" << endl;
            if (idx == 0)
            {
                insert_at_head(head1, tail1, val);
                print_sll(head1);
            }
            else if (idx == sz)
            {
                insert_at_tail(head1, tail1, val);
                print_sll(head1);
            }
            else
            {
                // insert at any position
                insert_at_any_pos(head1, idx, val);
                print_sll(head1);
            }
        }
    }
    return 0;
}