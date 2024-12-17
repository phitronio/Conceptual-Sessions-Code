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

void printing(Node *&head)
{

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

void insert_at_tail(Node *&tail, int val)
{

    // node creation
    Node *new_node = new Node(val);

    tail->next = new_node;

    tail = new_node;
}

int main()
{

    // dynamic Node creation

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    insert_at_tail(tail, 100);

    printing(head);
}