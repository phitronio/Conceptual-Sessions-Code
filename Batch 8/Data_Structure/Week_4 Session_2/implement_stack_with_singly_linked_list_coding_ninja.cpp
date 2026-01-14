/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475

#include <bits/stdc++.h>
using namespace std;

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
    Node *H;
    int sz = 0;
    Stack()
    {
        // Write your code here
        H = NULL;
    }

    int getSize()
    {
        // Write your code here
        return sz;
    }

    bool isEmpty()
    {
        // Write your code here
        if (sz == 0)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        // Write your code here
        //  option - 1
        //  Node * newNode = new Node(data);
        //  if(H==NULL){
        //      H=newNode;
        //  }else{
        //      newNode -> next = H;
        //      H = newNode;
        //  }

        // option - 2
        Node *newNode = new Node(data, H);
        H = newNode;
        sz++;
    }

    void pop()
    {
        // if(sz==0){
        if (H == NULL)
        {
            return;
        }
        // Write your code here
        H = H->next;
        sz--;
    }

    int getTop()
    {
        // Write your code here
        if (sz == 0)
        {
            return -1;
        }
        return H->data;
    }
};
