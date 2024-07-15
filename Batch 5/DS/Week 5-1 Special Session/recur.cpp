/**
 * Author: Asif Mohammed Sifat
 * Created: 2024-07-15   21:15:31
 * Source: 
 */
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;

void fun(int val){
    if(val==6) return;
    fun(val+1);
    cout<<val<<endl;
}   

int main(){    
    fun(1);      
            
              
    return 0;
}
