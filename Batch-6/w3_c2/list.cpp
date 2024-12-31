//check if the list is Palindrome.
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(list<int>&l){
    auto front = l.begin();
    auto back = l.rbegin();

    for(int i=0; i<l.size()/2; i++){
        if(*front != *back) return false;
        front++;
        back++;
    }
    return true;
}


int main(){
    list<int>l;
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        l.push_back(val);
    }

    if(isPalindrome(l)){
        cout << "Palindrome"<<endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }
}