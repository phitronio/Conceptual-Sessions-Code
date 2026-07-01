#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
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
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }

    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        if (tmp == NULL)
            break;
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }

    Node *newNode = new Node(val);
    if (tmp->next == NULL)
    {
        tmp->next = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
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

int main()
{
    fastIO();
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x)
    {

        insert_at_tail(head, tail, x);
    }

    print_list(head);

    insert_at_any_pos(head, tail, 0, 5);
    print_list(head);
    insert_at_any_pos(head, tail, 5, 45);
    print_list(head);
    insert_at_any_pos(head, tail, 3, 25);
    print_list(head);
    insert_at_any_pos(head, tail, 13, 25);
    print_list(head);

    return 0;
}
