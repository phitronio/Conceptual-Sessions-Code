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

void insert_at_head(Node *&head, int val) // o(1)
{

    // 1.notun node create kora
    Node *new_node = new Node(val);

    // 2. connection

    new_node->next = head;

    // 3. head change korte hobe

    head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int val) // o(1)
{

    // 1.notun node create kora
    Node *new_node = new Node(val);

    // 2. connection

    tail->next = new_node;

    // 3. tail change korte hobe

    tail = new_node;
}

void insert_at_any_position(Node *&head, int pos, int val)
{

    Node *new_node = new Node(val);

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{

    Node *head;
    Node *tail;

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    head = a;
    tail = c;

    a->next = b;
    b->next = c;

    insert_at_head(head, 100);
    insert_at_head(head, 200);

    insert_at_tail(head, tail, 500);
    insert_at_tail(head, tail, 600);

    insert_at_any_position(head, 3, 1000);

    print_linked_list(head);
}