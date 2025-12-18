#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    fastIO();
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if (n == 1) {
            cout<<"NO"<<endl;
            continue;
        }

        bool flag = true;
        for(int i=2; i*i<=n; i++)
        {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}