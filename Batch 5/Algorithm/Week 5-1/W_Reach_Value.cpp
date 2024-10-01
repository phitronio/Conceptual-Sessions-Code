// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll input;

bool rec(ll n)
{
    if(n > input)
        return false;
    if(n == input)
        return true;
    return rec(n*10) || rec(n*20);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> input;
        bool flag = rec(1);
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}