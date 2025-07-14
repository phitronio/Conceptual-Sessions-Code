
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;
                    
int main(){
    list<int>l;
    int n;
    while(cin>>n && n!=-1) l.push_back(n);

    l.sort();
    l.unique();

    for(auto val:l) cout<<val<<endl;                  
            
              
    return 0;
}
