/**
 * Author: Asif Mohammed Sifat
 * Created: 2024-07-01
 */

// ProblemLinK: https://leetcode.com/problems/design-browser-history/description/
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;

class BrowserHistory {
public:
    class Node{
        public:
            string data;
            Node* next;
            Node* prev;

            Node(string data){
                this->data = data;
                this->next = NULL;
                this->prev = NULL;

            }
    };

    Node* head = new Node(" ");

    BrowserHistory(string homepage) {
        head->data = homepage;
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        head->next = newNode;
        newNode->prev = head;
        head = newNode;
        return;        
    }
    
    string back(int steps) {
        for(int i=0;i<steps;i++){
            if(head->prev!=NULL) head = head->prev;
        }
        return head->data;
        
    }
    
    string forward(int steps) {
        for(int i=0;i<steps;i++){
            if(head->next!=NULL) head = head->next;
        }
        return head->data;        
    }
};