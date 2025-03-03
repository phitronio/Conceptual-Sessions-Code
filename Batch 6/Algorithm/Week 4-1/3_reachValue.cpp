/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2025-03-03   21:33:47
 * Source:
 */
#include <bits/stdc++.h>
using namespace std;

long long int input;

bool fun(long long int n)
{
    if(n>input) return false;

    if(n==input) return true;

    bool t1 = fun(n*10);
    bool t2 = fun(n*20);

    return t1 || t2;
    
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        cin>>input;
        if(fun(1)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
