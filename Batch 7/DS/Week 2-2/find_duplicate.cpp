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

void delete_at_any_pos(Node *head, int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    // Right now at the index before the expected delete node
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int max_find(Node *head)
{
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        mx = max(tmp->val, mx);
        tmp = tmp->next;
    }
    // cout << endl;
    return mx;
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
    print_list(head1);
    // cout << count_linked_list(head1) << endl;

    for (Node *i = head1; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    print_list(head1);

    // Node *tmp = head1;
    // int idx = 0;
    // while (tmp->next != NULL)
    // {
    //     if (tmp->val == tmp->next->val)
    //     {
    //         cout << "duplicate" << endl;
    //         delete_at_any_pos(head1, idx);
    //         print_list(head1);
    //         // return 0;
    //     }
    //     else
    //     {

    //         tmp = tmp->next;
    //         idx++;
    //     }
    // }

    // cout << "Not duplicate" << endl;

    // O(n*n)
    Node *i = head1;
    while (i != NULL)
    {
        Node *j = i;
        while (j->next != NULL)
        {
            if (i->val == j->next->val)
            {
                // swap(i->val, j->val);
                Node *deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            }
            else
            {
                j = j->next;
            }
        }
        i = i->next;
    }

    print_list(head1);

    return 0;
}