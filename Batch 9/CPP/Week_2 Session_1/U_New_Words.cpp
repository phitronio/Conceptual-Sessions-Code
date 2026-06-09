#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

int main()
{
    fastIO();
    string s;
    cin>>s;

    

    int freq[26] = {0};

    int ln = s.size();

    for(int i=0; i<ln; i++)
    {
        char ch = tolower(s[i]);
        freq[ch-'a']++;
    }

    int res = INT_MAX;

    for(int i=0; i<26; i++) {
        char ch = i + 'a';

        if (ch == 'e' || ch == 'g' || ch == 'y' || ch == 'p' || ch == 't') {
            res = min(res, freq[i]);
        }
    }

    cout<<res<<endl;
    
    return 0;
}