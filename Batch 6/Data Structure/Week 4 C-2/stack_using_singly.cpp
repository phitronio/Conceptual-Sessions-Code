/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    // Write your code here

public:
    Node *head;
    int sz;

    Stack()
    {
        head = NULL;
        sz = 0;
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int data)
    { // head e insertion
        Node *New_Node = new Node(data);
        sz++;

        if (head == NULL)
        {
            head = New_Node;
            return;
        }
        New_Node->next = head;
        head = New_Node;
    }

    void pop()
    {
        if (isEmpty() == true)
        {
            return;
        }

        Node *delete_node = head;

        head = head->next;

        delete delete_node;
        sz--;
    }

    int getTop()
    {

        if (isEmpty() == true)
        {
            return -1;
        }

        else
            return head->data;
    }
};