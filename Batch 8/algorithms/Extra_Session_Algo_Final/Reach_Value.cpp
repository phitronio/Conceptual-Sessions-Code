// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool recur(ll cur, ll tar)
{
    if (cur == tar) return true;
    if (cur > tar ) return false;

    bool op1 = recur(cur*10, tar);
    bool op2 = recur(cur*20, tar);

    return (op1 || op2);

}

int main()
{
    fastIO();
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if (recur(1, n) == true) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
