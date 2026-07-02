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
    int freq[101] = {0};
    int val;
    while (cin >> val)
    {
        if (freq[val] == 0)
        {
            insert_at_tail(head, tail, val);
            freq[val]++;
        }
    }
    print_linked_list(head);

    return 0;
}

/*
input:
5 4 8 6 2 1 8 1

output:
5 4 8 6 2 1

*/