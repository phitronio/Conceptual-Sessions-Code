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
    cin>>s;

    while(true)
    {
        int idx = s.find("EGYPT");

        if (idx == -1 ) {
            break;
        } else {
            s.replace(idx, 5, " ");
        }
    }

    cout<<s<<endl;
    return 0;
}