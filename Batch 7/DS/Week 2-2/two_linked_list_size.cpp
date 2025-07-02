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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int count_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        // if (val == -1)
        // {
        //     break;
        // }
        insert_at_tail(head1, tail1, val);
    }
    // print_list(head1);
    // cout << count_linked_list(head1) << endl;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (cin >> val && val != -1)
    {
        // if (val == -1)
        // {
        //     break;
        // }
        insert_at_tail(head2, tail2, val);
    }
    // cout << count_linked_list(head2) << endl;
    // print_list(head2);
    // cout << sz << endl;
    if (count_linked_list(head1) == count_linked_list(head2))
    {
        cout << "Size Same" << endl;
    }
    else
    {
        cout << "Size Not Same" << endl;
    }
    return 0;
}