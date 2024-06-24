#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int val;
    Node* next;
};

int main(){   
    Node x,y;

    x.val = 10;
    y.val = 20;

    x.next = &y;
    y.next = NULL;


    cout<<x.val<<" "<<y.val<<endl;


              
    return 0;
}
