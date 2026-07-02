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
    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    // print_linked_list(head);

    int freq[101] = {0};
    // [0, 2, 1, 0, 1, 1, 1, 0, 2, 0,0,....]
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << endl;
        freq[tmp->val]++; // value frequency count
        tmp = tmp->next;
    }

    bool flag = false; // false means, no duplicate
    for (int i = 0; i <= 100; i++)
    {
        // freq[1]=2;
        if (freq[i] > 1)
        {
            flag = true; // duplicate present
            break;
        }
    }

    if (flag == false)
    {
        cout << "No Duplicate value present" << endl;
    }
    else
    {
        cout << "Duplicate value present" << endl;
    }
    return 0;
}