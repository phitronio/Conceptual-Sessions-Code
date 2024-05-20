#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 3;

    int *p1 = &a;
    
    cout<<&a<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;


    int **p2 = &p1;
    cout<<&p1<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl; 
   
}