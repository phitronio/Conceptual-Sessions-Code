#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
    fastIO();
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    bool flag = true;

    for(int i=0; i<n-1; i++)
    {
        if (v[i] > v[i+1]) {
            flag = false;
            break; 
        }
    }

    if (flag == true) {
        cout<<"Ascending Order"<<endl;
    } else {
        cout<<"Not Ascending"<<endl;
    }


    
    return 0;
}