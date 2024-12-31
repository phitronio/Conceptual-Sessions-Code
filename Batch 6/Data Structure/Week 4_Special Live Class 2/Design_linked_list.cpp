// Problem Link : https://leetcode.com/problems/design-linked-list/description/

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class MyLinkedList
{
public:
    Node *head;
    Node *tail;
    int sz;

    MyLinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    int get(int index)
    {

        if (index >= sz)
        {
            return -1;
        }

        Node *tmp = head;

        for (int i = 1; i <= index; i++)
        {
            tmp = tmp->next;
        }
        return tmp->val;
    }

    void addAtHead(int val)
    {
        Node *new_node = new Node(val);
        sz++;

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;

        head = new_node;
    }

    void addAtTail(int val)
    {

        Node *new_node = new Node(val);
        sz++;

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void addAtIndex(int index, int val)
    {

        if (index > sz)
        {
            return;
        }
        if (index == 0)
        {
            addAtHead(val);
        }
        else if (index == sz)
        {
            addAtTail(val);
        }
        else
        {

            Node *tmp = head;

            for (int i = 1; i <= index - 1; i++)
            {
                tmp = tmp->next;
            }

            Node *new_node = new Node(val);
            sz++;

            new_node->next = tmp->next;
            new_node->prev = tmp;
            tmp->next = new_node;
            new_node->next->prev = new_node;
        }
    }

    void deleteAtIndex(int index)
    {

        if (index >= sz)
        {
            return;
        }

        if (index == 0)
        {

            Node *delete_node = head;
            sz--;

            head = head->next;
            delete delete_node;

            if (head == NULL)
            {
                tail = NULL;
                return;
            }

            head->prev = NULL;
        }
        else if (index == sz - 1)
        {
            sz--;
            Node *delete_node = tail;

            tail = tail->prev;
            delete delete_node;

            if (tail == NULL)
            {
                head = NULL;
                return;
            }

            tail->next = NULL;
        }
        else
        {
            Node *tmp = head;
            sz--;

            for (int i = 1; i <= index - 1; i++)
            { // koita move

                tmp = tmp->next;
            }

            Node *delete_node = tmp->next;

            tmp->next = tmp->next->next;

            tmp->next->prev = tmp;
        }
    }
};
