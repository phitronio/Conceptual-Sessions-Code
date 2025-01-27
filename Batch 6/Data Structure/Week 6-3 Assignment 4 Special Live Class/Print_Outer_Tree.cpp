// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void LeftBoundary(Node *root, vector<int> &LB)
{
    while (root != NULL)
    {
        LB.push_back(root->val);
        if (root->left != NULL)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
}

void RightBoundary(Node *root, vector<int> &RB)
{
    while (root != NULL)
    {
        RB.push_back(root->val);
        if (root->right != NULL)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
}

int main()
{
    Node *root = input_tree();
    if (root == NULL)
    {
        return 0;
    }
    vector<int> LB_nodes, RB_nodes;
    // left boundary
    LeftBoundary(root->left, LB_nodes);

    // root print
    cout << root->val << " ";

    RightBoundary(root->right, RB_nodes);

    for (auto it = RB_nodes.rbegin(); it != RB_nodes.rend(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
