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

Node* inputTree() {
    int first;
    cin>>first;
    Node* root;

    if (first == -1) root = NULL;
    else root = new Node(first);

    queue<Node*> qNode;
    if (root) qNode.push(root);

    while(!qNode.empty()) {
        Node* frontNode = qNode.front();
        qNode.pop();
        Node* leftN;
        Node* rightN;

        int l, r;
        cin>>l>>r;
        if (l==-1) leftN = NULL;
        else leftN = new Node(l);
        if (r == -1) rightN = NULL;
        else rightN = new Node(r);

        if (leftN) {
            frontNode->left = leftN;
            qNode.push(leftN);
        } 
        if (rightN) {
            frontNode->right = rightN;
            qNode.push(rightN);
        } 
    }

    return root;
}

void levelOrderPrint(Node* root) {
    if (root == NULL) {
        cout<<"Empty Tree"<<endl;
        return;
    }

    queue<Node*> nodeQ;
    nodeQ.push(root);

    while(!nodeQ.empty()) {
        Node* frontNode = nodeQ.front();
        nodeQ.pop();
        cout<<frontNode->val<<" ";

        if (frontNode->left) nodeQ.push(frontNode->left);
        if (frontNode->right) nodeQ.push(frontNode->right);
    }
    cout<<endl;
}

int main()
{
    Node *root = inputTree();
    levelOrderPrint(root);

    return 0;
}
