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
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.  ber kore ana
        Node *f = q.front();
        q.pop();

        // 2.  oi node ke niye kaj
        cout << f->val << " ";

        // 3.  children push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}
int sum = 0;
void level_order_with_level(Node *root, int max_h)
{
    // if(root==NULL){
    //     return;
    // }
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *node = parent.first;
        int level = parent.second;

        if (level == max_h)
        {
            sum += node->val;
        }

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
    // cout<<endl;
    // cout << max_height(root) << endl;
    int hei = max_height(root);
    level_order_with_level(root, hei);
    cout << sum << endl;
    return 0;
}