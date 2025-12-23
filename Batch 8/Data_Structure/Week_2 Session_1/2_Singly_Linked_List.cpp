#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int sz = 0;
class Node
{
    public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    sz++;
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void print_list(Node *head) {
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    sz++;
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_tail_un(Node* &head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val)
{
    if (idx == 0) {
        insert_at_head(head, tail, val);
        return;
    }

    Node* tmp = head;
    for(int i=1; i<idx; i++) {
        if (tmp == NULL) break;
        tmp = tmp->next;
    }

    if (tmp == NULL) {
        cout<<"Invalid Index"<<endl;
        return;
    }
    sz++;
    Node *newNode = new Node(val);

    if (tmp->next == NULL) {
        tmp->next = newNode;
        tail = newNode;
    } else {
        newNode->next = tmp->next;
        tmp->next = newNode;
    }

}

int list_size(Node* head) {
    int cnt = 0;
    while(head != NULL) {
        cnt++;
        head = head->next;
    }

    return cnt;
}



int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    while(cin>>x)
    {
        
        // if (x == -1) break;
        insert_at_tail(head, tail, x);
    }
    insert_at_any_pos(head, tail, 2, 100);



    print_list(head);
    cout<<"size: "<<list_size(head)<<endl;
    cout<<"size opt: "<<sz<<endl;
    
    
    return 0;
}
