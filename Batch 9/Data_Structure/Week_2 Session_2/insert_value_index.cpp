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

    if (head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_any_pos(Node *&head, int idx, int val)
{

    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 2; i < idx - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}

int size_of_SLL(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << endl;
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // print_linked_list(head);

    int query;
    cin >> query;
    while (query--)
    {
        int index, value;
        cin >> index >> value;
        // invalid
        int sz = size_of_SLL(head);
        if (sz < index || index < 0)
        {
            cout << "Invalid" << endl;
        }
        // head insert
        else if (index == 0)
        {
            insert_at_head(head, tail, value);
            print_linked_list(head);
        }
        // tail insert
        else if (index == sz)
        {
            insert_at_tail(head, tail, value);
            print_linked_list(head);
        }
        // any pos
        else
        {
            insert_at_any_pos(head, index, value);
            print_linked_list(head);
        }
        // print_linked_list(head); // all condition
    }

    return 0;
}