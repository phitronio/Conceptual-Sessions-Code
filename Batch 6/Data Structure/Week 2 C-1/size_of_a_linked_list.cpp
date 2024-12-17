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

void printing(Node *head)
{

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
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

    cout << size(head) << endl;
}