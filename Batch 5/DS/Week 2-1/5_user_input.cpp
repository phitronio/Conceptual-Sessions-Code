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

void insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;

}

void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
    return;
}

void insertAtAnyPosition(Node* &head,int pos,int val){
    if(pos==1){
        insertAtHead(head,val);
        return;
    }else{
        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }

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
    Node* head = NULL;
    while(1){
        int val;
        cin>>val;

        if(val==-1){
            break;
        }
        insertAtTail(head,val);
        // insertAtHead(head,val);
    }
    printList(head);
    cout<<endl;

    int pos,val;
    cin>>pos;
    delete_from_position(head,pos);
    printList(head);


    
    return 0;
}
