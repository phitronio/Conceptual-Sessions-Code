#include <bits/stdc++.h>
using namespace std;

class D_Node
{

public:
    int val; // value
    D_Node *next;
    D_Node *prev;

    D_Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int sz = 0;

void print_forward(D_Node *&head)
{
    D_Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(D_Node *&head, D_Node *&tail)
{
    D_Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// head
void insert_at_head(D_Node *&head, D_Node *&tail, int val)
{
    sz++;

    D_Node *new_node = new D_Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    head->prev = new_node;
    new_node->next = head;

    head = new_node;
}

// tail

void insert_at_tail(D_Node *&head, D_Node *&tail, int val)
{
    D_Node *new_node = new D_Node(val);
    sz++;

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->prev = tail;
    tail->next = new_node;

    tail = new_node;
}

void insert_at_any_position(D_Node *&head, D_Node *&tail, int index, int val)
{
    D_Node *temp = head;
    sz++;

    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    D_Node *new_node = new D_Node(val);

    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
}

int main()
{
    D_Node *head = NULL;
    D_Node *tail = NULL;

    insert_at_head(head, tail, 100);
    insert_at_tail(head, tail, 200);
    insert_at_tail(head, tail, 300);
    insert_at_any_position(head, tail, 2, 1000);

    cout << sz << endl; // O(1)

    print_forward(head);
    print_backward(head, tail);
}