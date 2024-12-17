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

void insert_at_head(Node *&head, int val)
{

    // 1st step : node creation

    Node *new_node = new Node(val);

    // new node ta k linked list e connect kora

    new_node->next = head;

    // head k new node e shift korte hobe

    head = new_node;
}

int main()
{

    // dynamic Node creation

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    insert_at_head(head, 80);

    printing(head);
}