#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class Node
{
    public:
    int val;
    Node* left; 
    Node* right;
    Node(int val) 
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node* root)
{
    queue<Node*> q;
    if (root) {
        q.push(root);
    }

    while(!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        cout<<parent->val<<" ";

        if (parent->left) {
            q.push(parent->left);
        }
        if (parent->right) {
            q.push(parent->right);
        }
    }
}

Node* treeInput()
{
    int x;
    cin>>x;

    Node* root;

    if (x == -1) {
        root = NULL;
    } else {
        root = new Node(x);
    }

    queue<Node*> nodeQ;

    if (root) {
        nodeQ.push(root);
    }

    while(!nodeQ.empty())
    {
        Node*fnode = nodeQ.front();
        nodeQ.pop();

        int l, r;
        cin>>l>>r;

        if (l != -1) {
            fnode->left = new Node(l);
        }
        if (r != -1) {
            fnode->right = new Node(r);
        }

        if (fnode->left) nodeQ.push(fnode->left);
        if (fnode->right) nodeQ.push(fnode->right);
    }

    return root;
}

void rightOuter(Node* root)
{
    
    if (root->right) {
        rightOuter(root->right);
    } else if (root->left){
        rightOuter(root->left);
    }
    cout<<root->val<<" ";
}

void leftOuter(Node* root)
{
    // cout<<root->val<<" ";
    if (root->left) {
        leftOuter(root->left);
    } else if (root->right) {
        leftOuter(root->right);
    }

    cout<<root->val<<" ";

}
int main()
{
    fastIO();

    Node *root = treeInput();
    level_order(root);
    cout<<endl;
    rightOuter(root);
    cout<<endl;
    leftOuter(root);
    
    
    return 0;
}