
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

  //way -01
    l.unique();
  //way-02
   for(auto it = l.begin();it!=l.end();it++){
        if(next(it)!=l.end() && *it==*next(it)){
            l.erase(next(it));
        }
    }

    for(auto val:l) cout<<val<<endl;                  
            
              
    return 0;
}
