#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* & head, Node* &tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node *newNode = new Node (val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any_position(Node* &head, Node* &tail, int idx, int val) 
{
    if (idx == 0) {
        insert_at_head(head, tail, val);
        return;
    }

    Node *tmp = head;
    for(int i=1; i<idx; i++) {
        if (tmp == NULL) break;
        tmp = tmp->next;
    }

    if (tmp == NULL) {
        cout<<"invalid index"<<endl;
        return;
    }

    if (tmp->next == NULL) {
        insert_at_tail(head, tail, val);
        return;
    }

    Node *middleNode = new Node(val);  
    Node *lastNode = tmp->next;

    middleNode->next = lastNode;
    lastNode->prev = middleNode;

    tmp->next = middleNode;
    middleNode->prev = tmp;

}

void delete_at_head(Node* &head, Node* &tail) {
    if (head == NULL) return;
    if (head->next == NULL) {
        Node *dltNode = head;
        head = NULL;
        tail = NULL;
        delete dltNode;
        return;
    }
    Node *dltNode = head;
    head = head->next;
    head->prev = NULL;
    delete dltNode;

}

void delete_at_any_position(Node* &head, Node* &tail, int idx) {
    if (idx == 0) {
        delete_at_head(head, tail);
        return;
    }

    Node *tmp = head;
    for(int i=1; i<idx; i++) {
        if (tmp == NULL) break;
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL) {
        cout<<"Invalid"<<endl;
        return;
    }

    Node *middleNode = tmp->next;
    Node *lastNode = tmp->next->next;

    if (tmp->next->next == NULL) {
        tmp->next = NULL;
        tail = tmp;
        delete middleNode;
        return;
    }

    tmp->next = lastNode;
    lastNode->prev = tmp;
    delete middleNode;

}

void print_forward(Node *head) {
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int sizee(Node *head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}

int main()
{
    fastIO();
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin>>n;
    while(n--) {
        int val;
        cin>>val;
        // if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    print_forward(head);
    // delete_at_head(head, tail);
    // print_forward(head);
    // delete_at_head(head, tail);
    // print_forward(head);
    // delete_at_head(head, tail);
    // print_forward(head);
    // delete_at_head(head, tail);
    // print_forward(head);

    delete_at_any_position(head, tail, 1);
    print_forward(head);
    delete_at_any_position(head, tail, 2);
    print_forward(head);
    delete_at_any_position(head, tail, 0);
    print_forward(head);
    delete_at_any_position(head, tail, 1);
    print_forward(head);

   
    
    return 0;
}