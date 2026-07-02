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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int size_of_SLL(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << endl;
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // -1 input
    // int val;
    // while (true)
    // {
    //     cin >> val;
    //     if (val == -1)
    //     {
    //         break;
    //     }
    //     insert_at_tail(head, tail, val);
    // }

    // without -1 input
    int val;
    int sz = 0;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
        sz++;
    }
    // print_linked_list(head);

    // cout << size_of_SLL(head) << endl;
    // cout << sz << endl;
    // even
    if (sz % 2 == 0)
    {
        int mid1 = (sz / 2 - 1);
        Node *temp = head;
        for (int i = 0; i < mid1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
        cout << temp->next->val << endl;
    }
    // odd
    // if (sz % 2 == 1)
    else
    {
        int mid = sz / 2; //1/2 = 0
        Node *temp = head;
        for (int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }

    return 0;
}

/*


*/