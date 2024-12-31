#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val)
{
    if (idx == 0) {
        insert_at_head(head, tail, val);
        return;
    }

    Node* newnode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        if (tmp == NULL) {
            cout << "Invalid index" << endl;
            delete newnode;
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL) {
        tail = newnode;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insert_at_head(head, tail, 10);
    insert_at_head(head, tail, 20);
    insert_at_any_pos(head, tail, 1, 15);
    insert_at_any_pos(head, tail, 3, 5);
    insert_at_head(head, tail, 25);
    insert_at_tail(head, tail, 50);

    print_linked_list(head);
    cout << "Tail = " << tail->val << endl;

    return 0;
}
