#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l = {1, 2 , 3, 6, 4, 6,5};

    for(int val: l){
        cout << val << " ";
    }
    cout << endl;

    l.remove(6);

    for(int val: l){
        cout << val << " ";
    }
    cout << endl;

}