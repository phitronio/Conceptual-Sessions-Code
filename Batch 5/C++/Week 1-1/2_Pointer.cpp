/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a = 5;
    // int* a_ptr = &a;
 
    // cout<<a<<endl; //5
    // cout<<&a<<endl; //af

    // cout<<*a_ptr<<endl; //af
    // cout<<&a_ptr<<endl; //bf

    int a = 5;
    int* b = &a;
    int** c = &b;


    cout<<a<<endl;
    cout<<&a<<endl;

    cout<<b<<endl;
    cout<<&b<<endl;


    cout<<**c<<endl;


  
              
    return 0;
}
