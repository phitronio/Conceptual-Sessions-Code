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


bool is_palindrome(Node* head){
    vector<int>vec;
    //int mx=INT_MIN;
    Node* tmp = head;
    while(tmp != NULL){
        vec.push_back(tmp->val);
        //mx = max(mx, tmp->val);
        tmp = tmp -> next;
    }



    for(int i=0, j=vec.size()-1; i<j; i++, j--){
        if(vec[i] != vec[j]){
            return false;
        }
    }
    return true;
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

    //print_linked_list(head);
    if(is_palindrome(head)){
        cout << "Palindrome" << endl;
    }
    else cout << "Not Palindrome" << endl;
    return 0;
}