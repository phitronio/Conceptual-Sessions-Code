#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int val)
{

    // 1st step : node creation

    Node *new_node = new Node(val);

    // new node ta k linked list e connect kora

    new_node->next = head;

    // head k new node e shift korte hobe

    head = new_node;
}

void printing(Node *head)
{

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(Node *head)
{

    Node *tmp = head;
    int sz = 0;

    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }

    return sz;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    if (head == NULL)
    {
        Node *new_node = new Node(val);

        head = new_node;
        tail = new_node;

        return;
    }

    Node *new_node = new Node(val);

    tail->next = new_node;

    tail = new_node;
}

void insert_at_any_position(Node *&head, Node *&tail, int value, int index)
{

    Node *tmp = head;

    for (int i = 1; i < index; i++)
    { //

        tmp = tmp->next;
    }

    Node *new_node = new Node(value);

    new_node->next = tmp->next;

    tmp->next = new_node;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {

        int x;
        cin >> x;

        if (x == -1)
        {
            break;
        }

        insert_at_tail(head, tail, x);
    }

    int sz = size(head);

    int index = (sz / 2);

    Node *tmp = head;

    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }

    if (sz % 2 != 0)
    {

        cout << tmp->next->value << endl;
    }
    else
    {
        cout << tmp->value << " " << tmp->next->value << endl;
    }
}