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

// int n;
// cout << n; // garbage

// Node *head; // garbage
// Node *head = NULL; // not garbage, here NULL

void delete_at_head(Node *&head, Node *&tail)
{
    // if (head == tail && head == NULL && tail == NULL)
    if (head == NULL)
    {
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_at_tail(Node *&head, Node *&tail)
{
    // if (head == tail && head == NULL && tail == NULL)
    // if (head == NULL)
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_any_pos(Node *head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
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
    }
    print_list_forward(head);
    print_list_backward(tail);
    // delete_at_head(head, tail);
    // delete_at_tail(head, tail);

    int idx;
    cin >> idx;
    int sz = count_size(head);
    if (idx < 0 || idx >= sz)
    {
        cout << "Invalid Index" << endl;
    }
    else if (idx == 0)
    {
        // head delete
        delete_at_head(head, tail);
    }
    else if (idx == sz - 1)
    {
        // tail delete
        delete_at_tail(head, tail);
    }
    else
    {
        // delete any position without head or tail
        delete_at_any_pos(head, idx);
    }

    print_list_forward(head);
    print_list_backward(tail);
    return 0;
}