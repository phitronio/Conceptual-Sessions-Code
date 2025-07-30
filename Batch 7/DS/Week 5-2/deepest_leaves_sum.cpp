#include <bits/stdc++.h>
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

int mx_dep;
int sum = 0;

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

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
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
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

        // 3. children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree";
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        // 1.  ber kore ana
        pair<Node *, int> f = q.front();
        q.pop();

        Node *node = f.first;
        int level = f.second;

        // 2.  oi node ke niye kaj
        // cout << f->val << " ";
        if (level == mx_dep)
        {
            sum += node->val;
        }

        // 3.  children push kora
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}

int main()
{
    Node *root = input_tree();
    // level_order(root);
    mx_dep = max_height(root);
    level_order(root);
    cout << sum << endl;
    return 0;
}

/* 
1 2 3 4 5 -1 6 7 -1 -1 -1 -1 8 -1 -1 -1 -1

15
*/