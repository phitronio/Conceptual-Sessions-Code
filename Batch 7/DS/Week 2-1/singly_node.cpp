#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;   // kon type er data
    Node *next; // tar next node er address

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{

    Node *temp = head; // initially head store thakbe

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head;

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    head = a;

    a->next = b;
    b->next = c;

    print_linked_list(head);
}