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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    // if (tail == NULL)
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    // if (tail == NULL)
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int count_size(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        // cout << temp->val << " ";
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    int sz = count_size(head);
    if (idx < 0 || idx > sz)
    {
        cout << "Invalid index" << endl;
        return;
    }

    if (idx == 0)
    { // insert head
        insert_at_head(head, tail, val);
        return;
    }

    if (idx == sz)
    {
        insert_at_tail(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    // if (tmp->next != NULL)
    // {
    tmp->next->prev = newNode;
    // }
    tmp->next = newNode;
    newNode->prev = tmp;
}

void print_list_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_list_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
        // insert_at_head(head, tail, val);
    }

    int idx;
    cin >> idx >> val;

    insert_at_any_pos(head, tail, idx, val);

    print_list_forward(head);
    print_list_backward(tail);
    return 0;
}