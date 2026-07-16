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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node*&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    if (idx < 0) {
        cout<<"invalid"<<endl;
        return;
    }
    if (idx == 0) {
        insert_at_head(head, tail, val);
        return;
    }

    Node *tmp = head;
    for(int i=1; i<idx; i++)
    {
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



    Node *lastNode = tmp->next;
    Node *middleNode = new Node(val);


    middleNode->next = lastNode;
    lastNode->prev = middleNode;

    tmp->next = middleNode;
    middleNode->prev = tmp;



}

void print_forward(Node *head)
{
    // Node *tmp = head;

    while(head != NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }

    cout<<endl;
}

int main()
{
    fastIO();

    Node * head = NULL;
    Node * tail = NULL;


    while(true)
    {
        int val;
        cin>>val;

        if (val == -1) break;
        // insert_at_head(head, tail, val);
        insert_at_tail(head, tail, val);
    }

     print_forward(head);

    insert_at_any_position(head, tail, 0, 5);
    print_forward(head);
    insert_at_any_position(head, tail, 5, 50);
    print_forward(head);
    insert_at_any_position(head, tail, 3, 25);
    print_forward(head);
    insert_at_any_position(head, tail, 9, 25);
    print_forward(head);
    insert_at_any_position(head, tail, -19, 125);
    print_forward(head);

    // int val;
    // while(cin>>val)
    // {
    //     insert_at_head(head, tail, val);
    // }

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++) {
    //     int val;
    //     cin>>val;
    //     insert_at_head(head, tail, val);
    // }

   



    
    
    return 0;
}