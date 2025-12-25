#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    // print nodes
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        // cout << temp->val << " ";
        temp = temp->next;
    }
    // cout << sz << endl;

    if (sz % 2 == 0)
    {
        // even size
        int mid = sz / 2;
        Node *temp3 = head;
        for (int i = 0; i < mid - 1; i++)
        {
            temp3 = temp3->next;
        }
        cout << temp3->val << " " << temp3->next->val << endl;
    }
    else
    {
        // odd size
        int mid = sz / 2;
        Node *temp2 = head;
        for (int i = 0; i < mid; i++)
        {
            temp2 = temp2->next;
        }
        cout << temp2->val << endl;
    }
    return 0;
}