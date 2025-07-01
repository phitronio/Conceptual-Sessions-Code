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

    // jodi eita prothom node hoi

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    // 2. connection

    tail->next = new_node;

    // 3. tail change korte hobe

    tail = new_node;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int x;

    while (1)
    {
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    print_linked_list(head);
}