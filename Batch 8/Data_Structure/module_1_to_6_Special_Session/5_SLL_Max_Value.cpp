#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

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

void print_list(Node* head) {
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
}

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val) {
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
        cout<<"Invalid Index"<<nl;
        return;
    }

    Node* newnode = new Node(val);
    if (tmp->next == NULL) {
        tail->next = newnode;
        tail = newnode;
    } else {
        newnode->next = tmp->next;
        tmp->next = newnode;
    }
}

int count_size(Node* head) {
    int cnt = 0;
    while(head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int max_val(Node* head)
{
    int mx = INT_MIN;
    Node *tmp = head;
    while(tmp != NULL)
    {
        if (tmp->val > mx) 
        {
            mx = tmp->val;
           
        }
         tmp = tmp->next;
    }

    return mx;
   
}

int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int val; cin>>val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    print_list(head);
    cout<<endl;

    int ans = max_val(head);
    cout<<ans<<endl;
    // cout<<"size: "<<count_size(head);
    return 0;
}