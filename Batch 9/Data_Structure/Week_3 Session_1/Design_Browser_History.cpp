// problem link: https://leetcode.com/problems/design-browser-history/description/

class Node
{
    public:
    string val;
    Node *next;
    Node *prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *cur = NULL;


class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        cur = new Node(homepage);
    }
    
    void visit(string url) {
        Node *newNode = new Node(url);
        cur->next = newNode;
        newNode->prev = cur;
        cur = cur->next;
    }
    
    string back(int steps) {
        for(int i=1; i<=steps; i++) {
            if (cur->prev != NULL) {
                cur = cur->prev;
            }
        }

        return cur->val;
    }
    
    string forward(int steps) {
        for(int i=1; i<=steps; i++) {
            if (cur->next != NULL) {
                cur = cur->next;
            }
        }

        return cur->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
