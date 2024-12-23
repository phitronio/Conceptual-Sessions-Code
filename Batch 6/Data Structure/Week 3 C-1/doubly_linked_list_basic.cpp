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

int main()
{

    D_Node *head = new D_Node(10);
    D_Node *a = new D_Node(20);
    D_Node *b = new D_Node(30);
    D_Node *tail = new D_Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    print_forward(head);
    print_backward(head, tail);
}