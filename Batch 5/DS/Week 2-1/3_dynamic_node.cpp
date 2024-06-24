#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int val;
    Node* next;
};

int main(){   
    // int* a = new int;
    Node* x = new Node;
    Node* y = new Node;

    x->val = 10;
    y->val = 20;

    x->next = y;
    y->next = NULL;



    cout<<x->val<<" "<<y->val<<endl;


              
    return 0;
}
