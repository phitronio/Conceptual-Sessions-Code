#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val)
        {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }

};
void insert_at_tail(Node*& head, Node*& tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_at_head(Node*& head, Node*& tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = tail = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void insert_at_any_position(Node*& head, int pos, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = temp;
}
void delete_at_head(Node*&head, Node*&tail)
{
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void print_normal(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail(head,tail,val);    
    }
    //insert_at_head(head,tail, 100);
    delete_at_head(head,tail);
    print_normal(head);
    print_reverse(tail);
}