#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
    fastIO();
    
    string s;
    getline(cin, s);

    string x;
    cin>>x;

    stringstream ss(s);

    string word;

    int cnt = 0;
    while(ss>>word)
    {
        if (word == x) {
            cnt++;
        }
    }

    cout<<cnt<<endl;
    
    
    return 0;
}