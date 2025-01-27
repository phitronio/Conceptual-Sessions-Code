#include <iostream>
#include <queue>
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

int sum_all_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int left_tree_sum = sum_all_nodes(root->left);
    int right_tree_sum = sum_all_nodes(root->right);

    return root->val + left_tree_sum + right_tree_sum;
}

int sum_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return root->val;

    int left_tree_sum = sum_leaf_nodes(root->left);
    int right_tree_sum = sum_leaf_nodes(root->right);

    return left_tree_sum + right_tree_sum;
}

int main()
{
    Node *root = input_tree();
    cout << sum_all_nodes(root) << endl;
    return 0;
}
