/**
 * Author: Asif Mohammed Sifat
 * Created: 2024-07-01
 */
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
            
        }
};

//to calculate linkedlist size
int sz = 0;
void insertAtTail(Node* &head,int val){
    sz++;
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
    newNode->prev = temp;

}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


//O(n)
void coutSize(Node* head){
    int cnt = 0;
    while(head!=NULL){
        cnt++;
        head = head->next;
    }
    cout<<cnt<<endl;
}

//O(1)
void coutSizeOne(Node* head){
    // int cnt = 0;
    // while(head!=NULL){
    //     cnt++;
    //     head = head->next;
    // }
    cout<<sz<<endl;
}


                    
int main(){
    Node* head = NULL;

    while(1){
        int val;
        cin>>val;

        if(val==-1) break;

        insertAtTail(head,val);

    }


    printList(head);
    // coutSize(head); //O(n)
    coutSizeOne(head); //O(1)


            
              
    return 0;
}
