class BrowserHistory
{
public:
    class D_Node
    {

    public:
        string val; // value
        D_Node *next;
        D_Node *prev;

        D_Node(string val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    D_Node *cur = NULL;

    BrowserHistory(string homepage)
    {

        cur = new D_Node(homepage);
    }

    void visit(string url)
    {

        D_Node *new_node = new D_Node(url);

        new_node->prev = cur;
        cur->next = new_node;
        cur = new_node;
    }

    string back(int steps)
    {

        for (int i = 1; i <= steps; i++)
        {

            if (cur->prev != NULL)
            {
                cur = cur->prev;
            }
        }
        return cur->val;
    }

    string forward(int steps)
    {
        for (int i = 1; i <= steps; i++)
        {

            if (cur->next != NULL)
            {
                cur = cur->next;
            }
        }
        return cur->val;
    }
};
