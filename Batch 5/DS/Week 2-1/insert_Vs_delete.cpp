#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insertAtHead(Node* head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
    return;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
}
void printList(Node* temp){

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}
int main(){   
    // int* a = new int;
    
    Node* x = new Node(10);
    Node* y = new Node(20);
    Node* head = x;

    // x->val = 10;
    // y->val = 20;

    x->next = y;
    y->next = NULL;



    //delete_from_position(x,1);
    insertAtHead(head,10);
    printList(x);


              
    return 0;
}