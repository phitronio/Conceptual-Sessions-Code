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

void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_at_head(Node* &head)
{
    Node* deleteNode = head;
    head = head -> next;
    delete deleteNode;
}

void delete_at_any_position(Node* head, int idx){
    Node* tmp = head;

    for(int i=1; i<idx-1; i++){
        tmp = tmp -> next;
    }

    Node* deleteNode = tmp -> next;
    tmp -> next = tmp -> next -> next;
    delete deleteNode;

}

void delete_at_tail(Node* &head, Node* &tail){

    //if list is empty
    if(head == NULL){
        cout << "List is empty!" << endl;
        return;
    }

    //if theres only one node
    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node* tmp = head;

    while(tmp ->next != tail){
        tmp = tmp -> next;
    }

    delete tail;
    tail = tmp;
    tail -> next = NULL;
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
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    
    

    print_linked_list(head);
    delete_at_tail(head, tail);
    print_linked_list(head);
    //cout << tail->val << endl;
    return 0;
}