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
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // size

    // Node *tem = head;
    // tem == head; // tem and head are same SLL

    Node *head1 = NULL;
    Node *tail1 = NULL;

    // -1 input
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    // print_linked_list(head);
    // cout << endl;
    // print_linked_list(head1);

    // cout << size_of_SLL(head) << endl;
    // cout << size_of_SLL(head1) << endl;

    if (size_of_SLL(head) == size_of_SLL(head1))
    {
        // cout << "Size same" << endl;
        // for using size of SLL
        bool flag = true; // true means all value are okay

        // Node *tem1 = head;
        // Node *tem2 = head1;

        while (head != NULL)
        {
            if (head->val != head1->val)
            {
                flag = false;
                break;
            }
            head = head->next;
            head1 = head1->next;
        }
        if (flag == true)
        {
            cout << "SLL All value are same" << endl;
        }
        else
        {
            cout << "SLL all value are not same!!!" << endl;
        }
    }
    else
    {
        cout << "SLL all value are not same!!!" << endl;
    }

    return 0;
}

/*


*/