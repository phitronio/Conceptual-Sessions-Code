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

    insert_at_any_position(head, tail, 700, 2);

    printing(head);
}