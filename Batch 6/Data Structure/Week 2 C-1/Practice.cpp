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

    int q;
    cin >> q;

    while (q--)
    {

        int index, value;
        cin >> index >> value;

        if (index == 0)
        {
            insert_at_head(head, value);
            printing(head);
        }
        else if (index > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (index == size(head))
        {

            insert_at_tail(head, tail, value);
            printing(head);
        }
        else
        {

            insert_at_any_position(head, tail, value, index);
            printing(head);
        }
    }
}